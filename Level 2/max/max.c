/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 19:57:56 by fsantama          #+#    #+#             */
/*   Updated: 2023/04/23 20:39:55 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int* tab, unsigned int len)
{
	unsigned int	i;
	int		max;

	i = 0;
	max = tab[i];
	while (i < len)
	{	
		if (max < tab[i])
			max = tab[i];
		i++;
	}
	return (max);
}
