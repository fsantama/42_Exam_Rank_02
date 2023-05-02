/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:43:42 by fsantama          #+#    #+#             */
/*   Updated: 2023/05/02 12:45:47 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct	s_list
{
	struct	s_list *next;
	void	*data;
} t_list;

int	ft_list_size(t_list *begin_list);

t_list	*new_node(void *data)
{
	t_list *node = malloc(sizeof(t_list));
	node->next = NULL;
	node->data = data;
	return (node);
}

int	main(void)
{
	t_list *node1 = new_node(NULL);
	t_list *node2 = new_node(NULL);
	t_list *node3 = new_node(NULL);
	t_list *node4 = new_node(NULL);
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	printf("List size: %d\n", ft_list_size(node1));
    free(node1);
    free(node2);
    free(node3);
    free(node4);
    return (0);
}
