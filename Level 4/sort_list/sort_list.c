/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 18:49:57 by fsantama          #+#    #+#             */
/*   Updated: 2023/05/09 18:50:28 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <unistd.h>

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int		dato;
	t_list	*tmp;

	tmp = lst;
	while(lst->next != 0)
	{
		if(((*cmp)(lst->data, lst->next->data)) == 0)
		{
			dato = lst->data;
			lst->data = lst->next->data;
			lst->next->data = dato;
			lst = tmp;
		}
		else
			lst = lst->next;
	}
	lst = tmp;
	return (lst);
}
