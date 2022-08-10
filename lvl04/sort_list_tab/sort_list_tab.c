/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarihan <osarihan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 12:41:48 by osarihan          #+#    #+#             */
/*   Updated: 2022/08/10 12:45:29 by osarihan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list *tmp;
	int		j;
	
	tmp = lst;
	while (lst->next != '\0')
	{
		if (((*cmp)(lst->data, lst->next->data)) == 0)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next = swap;
			lst = tmp;
		}
		else
			lst = lst->next;
	}
	lst = tmp;
	return(lst);
}