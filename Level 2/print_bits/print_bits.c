/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 20:53:51 by fsantama          #+#    #+#             */
/*   Updated: 2023/04/23 21:15:19 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Función que imprime en binario un byte recibido como parámetro
void	print_bits(unsigned char octet)
{
	int	i;
	char	bit;

	// El valor de i comienza en 7 porque un byte tiene 8 bits, y el bit más significativo se encuentra en la posición 7 (el bit menos significativo se encuentra en la posición 0)
	i = 7;
	// Se recorren los bits del byte comenzando por el más significativo
	while (i >= 0)
	{
	// Se extrae el valor del bit en la posición i utilizando operaciones de bits
	// Se hace un shift a la derecha del octet i posiciones, para que el bit que nos interesa sea el bit menos significativo y luego se hace una operación AND con 1 para obtener el valor de ese bit.
	// La operación AND con 1 se realiza para asegurarnos de que el valor del bit es 0 o 1 (ya que cualquier número AND 1 siempre será 0 o 1)
	// Por último, se suma el valor '0' al resultado para obtener el caracter ASCII correspondiente al valor del bit (0 o 1)
		bit = (octet >> i & 1) + '0';
		//Se escribe el valor del bit en la salida estándar
		write(1, &bit, 1);
		// Se disminuye el valor de i para recorrer el siguiente bit
		i--;
	}
}

