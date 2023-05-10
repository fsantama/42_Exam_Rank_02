/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 21:53:29 by fsantama          #+#    #+#             */
/*   Updated: 2023/05/10 12:12:36 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	search_and_replace(char *str, char *s1, char *s2)
{
	int	i;

	i = 0;
	// Verificar si los caracteres de búsqueda y reemplazo son válidos
	if ((((s1[i] >= 'a' && s1[i] <= 'z')
				|| (s1[i] >= 'A' && s1[i] <= 'Z'))
			&& (s1[i + 1] == 0)
			&& ((s2[i] >= 'a' && s2[i] <= 'z')
				|| (s2[i] >= 'A' && s2[i] <= 'Z'))
			&& (s2[i + 1] == 0)))
	{
		// Recorrer la cadena de entrada
		while (str[i])
		{
			// Realizar el reemplazo si el carácter es igual al de búsqueda
			if (str[i] == s1[0])
				str[i] = s2[0];
			// Escribir el carácter actual en la salida estándar
			ft_putchar(str[i]);
				// Avanzar al siguiente carácter de la cadena
				i++;
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc == 4)
		search_and_replace(argv[1], argv[2], argv[3]);
	write(1, "\n", 1);
	return (0);
}
