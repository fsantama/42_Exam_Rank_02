/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:55:30 by fsantama          #+#    #+#             */
/*   Updated: 2023/04/12 16:27:57 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

// Declaración de la función ft_swap
void	ft_swap(int *a, int *b)
{
	int	temp;

	// Variable temporal para almacenar el valor de a
	temp = *a;
	// Asignar el valor de b a a
	*a = *b;
	// Asignar el valor temporal a b
	*b = temp;
}
/*
int	main(void)
{
	int	num1;
	int	num2;

	num1 = 10;
	num2 = 20;
	printf("Antes del intercambio: num1 = %d, num2 = %d\n", num1, num2);
	// Llamada a la función ft_swap pasando las direcciones de memoria
	ft_swap(&num1, &num2);
	printf("Después del intercambio: num1 = %d, num2 = %d\n", num1, num2);
	return (0);
}
*/
