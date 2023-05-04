/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 11:14:53 by fsantama          #+#    #+#             */
/*   Updated: 2023/05/04 11:21:27 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

unsigned int	lcm(unsigned int a, unsigned int b);

int	main(int argc, char **argv)
{
	unsigned int	a;
	unsigned int	b;

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	if (argc == 3)
		printf("%d\n", lcm(a, b));
	else
	write (1, "\n", 1);
	return (0);
}
