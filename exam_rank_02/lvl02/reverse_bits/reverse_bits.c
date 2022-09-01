/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarihan <osarihan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 11:50:48 by osarihan          #+#    #+#             */
/*   Updated: 2022/08/16 12:16:31 by osarihan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	print_bits(unsigned char octet)
{
	int i;
	i = 0;
	while (i < 8)
	{
		if ((octet >> i & 1) == 1)
		{
			write(1, "1", 1);
		}
		else
			write(1, "0", 1);
		i++;
	}	
}

unsigned char	reverse_bits(unsigned char octet)
{
	int	base = 128;
	int i = 0;
	int total;
	total = 0;

	while (i < 8)
	{
		if((octet>>i & 1) == 1)
			total += base;
		i++;
		base /= 2;
	}
	return(total);
}

int main(void)
{	
	int s = 100;
	print_bits(s);
	write(1, "\n", 1);
	print_bits(reverse_bits(s));
	write(1, "\n", 1);
}