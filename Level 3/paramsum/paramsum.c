/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 11:30:10 by fsantama          #+#    #+#             */
/*   Updated: 2023/05/04 12:31:45 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// El número de argumentos -1(para no contar el nombre del programa) se le pasa
// a la función ft_putnbr, que convierte el número int a caracteres imprimibles
void	ft_putnbr(int n)
{
	char	digit;

	digit = (n % 10) + '0';
	if (n >= 10)
		ft_putnbr(n / 10);
	write(1, &digit, 1);
}

int	main(int argc, char **argv)
{
	(void) argv;
	ft_putnbr(argc - 1);
	write (1, "\n", 1);
	return (0);
}
