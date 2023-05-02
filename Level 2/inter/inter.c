/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 18:21:50 by fsantama          #+#    #+#             */
/*   Updated: 2023/04/23 18:48:18 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Esta función busca un caracter en una cadena de un tamaño determinado
int	strnchr(char *str, char c, int size)
{
	int i = 0;
	// Mientras no se llegue al final de la cadena o se supere el tamaño máximo, buscar el caracter
	while (str[i] != 0 && i < size)
	{
		if (str[i] == c)
			return (1); // Si se encuentra el caracter, retornar 1 (verdadero)
		i++;
	}
	return (0); // Si no se encuentra el caracter, retornar 0 (falso)
}

// Esta función encuentra los caracteres comunes entre dos cadenas sin duplicados y los imprime en orden
void	inter(char *s1, char *s2)
{
	int i1 = 0; // Índice para recorrer la primera cadena
	int i2 = 0; // Índice para recorrer la segunda cadena

	// Recorrer la primera cadena
	while (s1[i1] != 0)
	{
		// Recorrer la segunda cadena
		while (s2[i2] != 0)
		{
			// Si se encuentra un caracter en común, verificar que no esté repetido en la primera cadena
			if (s1[i1] == s2[i2] && strnchr(s1, s1[i1], i1) == 0)
			{
				write(1, &s1[i1], 1); // Imprimir el caracter
				break; // Salir del ciclo interno para evitar imprimir caracteres repetidos
			}
			i2++;
		}
		i2 = 0; // Reiniciar el índice de la segunda cadena
		i1++; // Avanzar al siguiente caracter de la primera cadena
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}

