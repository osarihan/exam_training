/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarihan <osarihan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 14:59:40 by osarihan          #+#    #+#             */
/*   Updated: 2022/08/10 16:18:03 by osarihan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Assignment name  : ft_strlen
Expected files   : ft_strlen.c
Allowed functions: 
--------------------------------------------------------------------------------

Write a function that returns the length of a string.

Your function must be declared as follows:

int	ft_strlen(char *str);

*/
int	ft_strlen(char *str)
{
	int i;

	while(str[i] != '\0')
		i++;
	return(i);
}