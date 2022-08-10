/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarihan <osarihan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 14:57:06 by osarihan          #+#    #+#             */
/*   Updated: 2022/08/10 16:17:43 by osarihan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

Assignment name  : ft_strcpy
Expected files   : ft_strcpy.c
Allowed functions: 
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcpy (man strcpy).

Your function must be declared as follows:

char    *ft_strcpy(char *s1, char *s2);

*/
char    *ft_strcpy(char *s1, char *s2)
{
	int	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] == s2[i];
		i++;
	}
	s1[i] = '\0';
	return(s1);
}