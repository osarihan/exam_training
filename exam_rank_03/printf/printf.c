/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarihan <osarihan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 01:33:01 by osarihan          #+#    #+#             */
/*   Updated: 2022/09/01 02:08:21 by osarihan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int ft_printhex(unsigned int number);
int ft_putnumber(int number);
int ft_putchar(char c);
int ft_putstr(char *str);

int ft_printhex(unsigned int number)
{
	int total = 0;

	if (number >= 16)
	{
		total += ft_printhex(number / 16);
		total += ft_printhex(number % 16);		
	}
	else if (number > 10)
	{
		total += ft_putchar(number + 87);
	}
	else
		total += ft_putchar (number + 48);
	return(total);
}

int ft_putnumber(int number)
{
	int total = 0;

	if (number == -2147483648)
	{
		ft_putstr("-2147483648");
		return(12);
	}
	if (number > 10)
	{
		total += ft_putnumber(number / 10);
		total += ft_putnumber(number % 10);
	}
	else
		total += ft_putchar (number + 48);
	return (total);
}

int ft_putchar(char c)
{
	write(1, &c, 1);
	return(1);
}

int ft_putstr(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	return(i);
}

int ft_printf(char *str, ...)
{
	va_list asd;
	int i = 0;
	int total = 0;
	va_start(asd, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == '%')
				total += ft_putchar('%');
			else if (str[i] == 'd')
				total += ft_putnumber(va_arg(asd, int));
			else if (str[i] == 'x')
				total += ft_printhex(va_arg(asd, unsigned int));
			else if (str[i] == 's')
				total += ft_putstr(va_arg(asd, char *));
		}
		else
		{
			total += ft_putchar(str[i]);
		}
		i++;
	}
	return(total);
}

int main(){
	int a = 321234;
	unsigned int x = 123;
	char *str = "ouz123456789";
	ft_printf("ft_printf:int a:%d\n", a);
	printf("real_printf:int a:%d\n", a);
	ft_printf("char *str:%s\n", str);
	printf("real_printf:char *str:%s\n", str);
	ft_printf("hexadecimal x:%x\n", x);
	printf("real_printf:hexadecimal a:%x\n", x);
}