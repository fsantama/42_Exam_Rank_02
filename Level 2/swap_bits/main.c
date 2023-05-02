/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 21:36:55 by fsantama          #+#    #+#             */
/*   Updated: 2023/04/23 22:05:33 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

unsigned char	swap_bits(unsigned char octet);

void	print_bits(unsigned char octet)
{
	int	i;
	char	bit;

	i = 7;
	while (i >= 0)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
		i--;
	}
	write (1, "\n", 1);
}

int	main(int argc, char **argv)
{
	unsigned char c;
	unsigned char inverted;

	c = argv[1][0];
	printf("Caracter antes de invertir = %c\n", c);
	printf("Bits antes de invertir\n");
	print_bits(c);
	if (argc == 2)
	{
		inverted = swap_bits (c);
		printf("Caracter después de invertir = %c\n", inverted);
		printf("Bits después de invertir\n");
		print_bits(inverted);
	}
	return (0);
}
