/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 19:42:11 by fsantama          #+#    #+#             */
/*   Updated: 2023/04/13 20:05:45 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	ft_do_op(char *n1, char *op, char *n2)
{
	int	result;
	int	a;
	int	b;

	//Convertir las cadenas de números a enteros
	a = atoi(n1);
	b = atoi(n2);
	// Realizar la operación aritmética según el operador
	if (op[0] == '+')
		result = a + b;
	else if (op[0] == '-')
		result = a - b;
	else if (op[0] == '*')
		result = a * b;
	else if (op[0] == '/')
		result = a / b;
	else if (op[0] == '%')
		result = a % b;
	else
		write(1, "Error: operador inválido\n", 25);
	// Imprimir el resultado
	printf("%d\n", result);
}

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		ft_do_op(av[1], av[2], av[3]);
	}
	return (0);
}
