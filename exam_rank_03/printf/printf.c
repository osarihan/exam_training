/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarihan <osarihan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 17:30:30 by osarihan          #+#    #+#             */
/*   Updated: 2022/09/01 18:02:00 by osarihan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int ft_putstr(char *str);
int ft_putnbr(int nbr);
int ft_puthex(unsigned int nbr);

int ft_putchar (char c)
{
	write(1, &c, 1);
	return(1);
}

int ft_puthex(unsigned int nbr)
{
	int total = 0;
	if (nbr > 15)
	{
		total += ft_puthex(nbr / 16);
		total += ft_puthex(nbr % 16);
	}
	else if (nbr > 9)
	{
		total += ft_putchar(nbr + 87);
	}
	else
		total += ft_putchar(nbr + 48);
	return(total);
}

int ft_putstr(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return(i);
}

int ft_putnbr(int nbr)
{
	int total = 0;
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		return(11);
	}
	else if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = nbr * -1;
		total++;
	}
	if(nbr > 9)
	{
		total += ft_putnbr(nbr / 10);
		total += ft_putnbr(nbr % 10);
	}
	else
		total += ft_putchar(nbr + 48);
	return(total);
}

int ft_printf(char *str, ...)
{
	int i;
	va_list(asd);
	int total;
	
	total = 0;
	i = 0;
	va_start(asd, str);
	while(str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == '%')
				total += ft_putchar('%');
			else if (str[i] == 's')
			{
				total += ft_putstr(va_arg(asd, char *));
			}
			else if (str[i] == 'd')
			{
				total += ft_putnbr(va_arg(asd, int));
			}
			else if (str[i] == 'x')
			{
				total += ft_puthex(va_arg(asd, unsigned int));
			}
			i++;
		}
		else
		{
			write(1, &str[i], 1);
			i++;
			total++;
		}
	}
	va_end(asd);
	return(total);
}

int main(){
	int a = -2147483648;
	unsigned int x = 123;
	char *str = "ouz123456789";
	printf("-----------------------------------\n");
	ft_printf("ft_printf:   int a:%d\n", a);
	printf("real_printf: int a:%d\n", a);
	printf("-----------------------------------\n");
	ft_printf("ft_printf:   char *str:%s\n", str);
	printf("real_printf: char *str:%s\n", str);
	printf("-----------------------------------\n");
	ft_printf("ft_printf:   hexadecimal x:%x\n", x);
	printf("real_printf: hexadecimal a:%x\n", x);
	printf("-----------------------------------\n");
}