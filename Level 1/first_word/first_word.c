/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:54:00 by fsantama          #+#    #+#             */
/*   Updated: 2023/04/12 14:37:53 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_first_word(const char *str)
{
	int	i;

	i = 0;
	// Saltar espacios y tabulaciones iniciales
	while (str[i] == ' ' || str[i] == '\t')
	{
		i++;
	}
	// Imprimir primera palabra seguida de un salto de línea
	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		ft_print_first_word(argv[1]);
	}
	else
	{
		write(1, "Uso: ", 5);
		// Escribir el nombre del programa en la salida estándar
		while (argv[0][i] != '\0')
		{
			write(1, &argv[0][i], 1);
			i++;
		}
		write(1, " <cadena>\n", 11);
	}
	return (0);
}
