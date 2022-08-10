/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarihan <osarihan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:05:39 by osarihan          #+#    #+#             */
/*   Updated: 2022/08/10 12:40:09 by osarihan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void sort_int_tab(int *tab, unsigned int size)
{
	int i = 0;
	int j;
	int big;

	while(size > 0)
	{
		if (tab[i] <= tab[i] + 1)
		{
			i++;
			size--;
		}
		else if (tab[i] >= tab[i] + 1)
		{
			j = tab[i];
			tab[i] = tab[i] + 1;
			tab[i] + 1 = j;
			i++;
			size--;
		}
		else
		{
			i++;
			size--;
		}
	}
}