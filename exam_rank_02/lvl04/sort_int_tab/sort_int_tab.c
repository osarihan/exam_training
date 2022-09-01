/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarihan <osarihan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:05:39 by osarihan          #+#    #+#             */
/*   Updated: 2022/08/10 16:14:54 by osarihan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*

Assignment name  : sort_int_tab
Expected files   : sort_int_tab.c
Allowed functions: 
--------------------------------------------------------------------------------

Write the following function:

void sort_int_tab(int *tab, unsigned int size);

It must sort (in-place) the 'tab' int array, that contains exactly 'size'
members, in ascending order.

Doubles must be preserved.

Input is always coherent.

*/
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