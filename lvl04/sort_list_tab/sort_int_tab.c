/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarihan <osarihan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:05:39 by osarihan          #+#    #+#             */
/*   Updated: 2022/08/09 17:56:52 by osarihan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void sort_int_tab(int *tab, unsigned int size)
{
	int i = 0;
	int j;
	int big;
	
	big = 0;
	while (size > 0)
	{
		big = tab[i]
		i++;
		if (big < tab[i])
		{
			big = tab[i];
			i++;
		}
		else if (big > tab[i])
		{
			i++;
		} 
	    else
			i++;
		write()
		size--;
	}
}