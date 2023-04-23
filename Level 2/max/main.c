/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 20:32:59 by fsantama          #+#    #+#             */
/*   Updated: 2023/04/23 20:42:19 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	max(int* tab, unsigned int len);

int	main(void)
{
	int		tab[7] = {42, 5, 9 , 0 , -3, 100, 33};
	unsigned int	len = 7;
	
	printf("Máximo = %d\n", max(tab, len));
	return (0);
}
