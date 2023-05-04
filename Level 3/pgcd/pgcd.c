/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 12:32:49 by fsantama          #+#    #+#             */
/*   Updated: 2023/05/04 14:08:09 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
// Esta función calcula el máximo común divisor. Empezamos desde el nº más
// pequeño y vamos comprobando desde ese punto hasta 0.
int	pgcd(int a, int b)
{
	int	n;

	if (a < b)
		n = a;
	else
		n = b;
	while (1)
	{
		if (a % n == 0 && b % n == 0)
			return (n);
		n--;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d", pgcd(atoi(argv[1]), atoi(argv[2])));
	printf("\n");
	return (0);
}
