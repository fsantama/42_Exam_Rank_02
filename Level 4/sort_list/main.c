/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 18:49:31 by fsantama          #+#    #+#             */
/*   Updated: 2023/05/09 18:54:59 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stdlib.h>
#include <stdio.h>

t_list	*sort_list(t_list* lst, int (*cmp)(int, int));

int ascending(int a, int b)
{
	return (a <= b);
}

int main(void)
{
	t_list *lst = NULL;
	// Creamos una lista de ejemplo
	lst = malloc(sizeof(t_list));
	lst->data = 2;
	lst->next = malloc(sizeof(t_list));
	lst->next->data = 3;
	lst->next->next = malloc(sizeof(t_list));
	lst->next->next->data = 1;
	lst->next->next->next = NULL;
	// Ordenamos la lista en orden ascendente
	lst = sort_list(lst, &ascending);
	// Imprimimos la lista ordenada
	while (lst)
	{
		printf("%d ", lst->data);
		lst = lst->next;
	}
	printf("\n");
	return (0);
}

