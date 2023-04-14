/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 14:37:50 by fsantama          #+#    #+#             */
/*   Updated: 2023/04/14 15:02:23 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (*s != '\0')
	{
		while (reject[i] != '\0')
		{
			if (*s == reject[i])
			{
				return (count);
			}
			i++;
		}
		i = 0;
		s++;
		count++;
	}
	return (count);
}
