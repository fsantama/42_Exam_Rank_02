/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 21:53:29 by fsantama          #+#    #+#             */
/*   Updated: 2023/04/13 12:10:32 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	// Verificar si se pasaron exactamente 4 argumentos
	if (argc == 4)
	{
		// Verificar si los caracteres de búsqueda y reemplazo son válidos
		if ((((argv[2][0] >= 'a' && argv[2][0] <= 'z')
			|| (argv[2][0] >= 'A' && argv[2][0] <= 'Z'))
			&& argv[2][1] == '\0')
			&& ((argv[3][0] >= 'a' && argv[3][0] <= 'z')
			|| (argv[3][0] >= 'A' && argv[3][0] <= 'Z'))
			&& argv[3][1] == '\0')
		{
			// Recorrer la cadena de entrada usando un puntero
			while (argv[1][i] != '\0')
			{
				// Realizar el reemplazo si el carácter es igual al de búsqueda
				if (argv[1][i] == argv[2][0])
					argv[1][i] = argv[3][0];
				// Escribir el carácter actual en la salida estándar
				write(1, &argv[1][i], 1);
				// Avanzar al siguiente carácter de la cadena
				i++;
			}
		}
	}
	// Escribir una nueva línea al final de la salida
	write(1, "\n", 1);
	// Devolver 0 para indicar que el programa finalizó correctamente
	return (0);
}
