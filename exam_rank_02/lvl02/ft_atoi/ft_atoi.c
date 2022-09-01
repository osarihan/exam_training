/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarihan <osarihan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:49:15 by osarihan          #+#    #+#             */
/*   Updated: 2022/08/11 13:07:11 by osarihan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.

Your function must be declared as follows:

int	ft_atoi(const char *str);
*/
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i = 0;
	int	res = 1;
	int total = 0;

	while (str[i] == '\t' || str[i] == '\r' || str[i] == ' ')
		i++;
	if(str[i] != '\0')
	{
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				res = res * -1;
			i++;
		}
		while(str[i] >= '0' && str[i] <= '9')
		{
			total = total * 10;
			total = total + (str[i] - 48); 
			i++;
		}
	}
	return(total * res);
}

int main()
{
	int snc;
	char *str;
	
	str = "    ";
	snc = ft_atoi(str);
	printf("%d\n", snc);
}