/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:48:13 by fsantama          #+#    #+#             */
/*   Updated: 2023/05/02 14:00:20 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	len;
	int	*range;
	int	i;

	i = 0;
	len = end - start;
	if (len < 0)
		len = -len;
	range = (int *)malloc(sizeof(int) * (len + 1));
	if (range == NULL)
		return (NULL);
	if (start >= end)
	{
		while (start >= end)
			range[i++] = start--;
	}
	else if (start <= end)
	{
		while (start <= end)
			range[i++] = start++;
	}
	range[i] = 0;
	return (range);
}
