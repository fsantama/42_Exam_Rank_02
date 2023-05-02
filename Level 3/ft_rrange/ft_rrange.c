/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:16:03 by fsantama          #+#    #+#             */
/*   Updated: 2023/05/02 14:47:07 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_rrange(int start, int end)
{
    int len;
	int *rrange;
	int	i;
	int	sign;

	len = abs(end - start) + 1;
	rrange	= malloc(len * sizeof(int));
    if (rrange == NULL)
        return NULL;
	if (start > end)
		sign = 1;
	else
		sign = -1;
    i = 0;
    while (i < len)
	{
		rrange[i++] = end;
		end += sign;
	}
    return (rrange);
}
