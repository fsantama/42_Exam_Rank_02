/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:16:49 by fsantama          #+#    #+#             */
/*   Updated: 2023/05/02 14:19:57 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		*ft_rrange(int start, int end);
int		absolute_value(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int		main(int argc, char **argv)
{
	(void) argc;
	int start = atoi(argv[1]);
	int end = atoi(argv[2]);

	int *arr = ft_rrange(start, end);

	int i = 0;
	while (i < 1 + absolute_value(end - start))
	{
		printf("%d", arr[i]);
        if (i < 1 + absolute_value(end - start) - 1)
            printf(", ");
		++i;
	}
	printf("\n");
}
