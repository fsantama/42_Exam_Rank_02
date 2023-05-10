/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 11:03:20 by fsantama          #+#    #+#             */
/*   Updated: 2023/05/10 14:33:19 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

// We look for the prime numbers. If %div == 0, we divide n by div and continue
// searching
void	fprime(int n)
{
	int	div;

	div = 2; // Start at 2 to skip the first if condition
	if (n == 1)
		printf("1");
	while (n >= div)
	{
		if (n % div == 0)
		{
			printf("%d", div);
			if (n == div)
				break; // We left the process. We would have already finished
			printf("*");
			n /= div;
			div = 1;
		}
		div++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		fprime(atoi(argv[1]));
	printf("\n");
	return (0);
}
