/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 20:55:50 by fsantama          #+#    #+#             */
/*   Updated: 2023/04/23 21:00:50 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	print_bits(unsigned char octet);

int	main(int argc, char **argv)
{
	unsigned char	octet;

	octet = atoi(argv[1]);
	if (argc == 2) 
		print_bits(octet);
	write(1, "\n", 1);
	return (0);
}
