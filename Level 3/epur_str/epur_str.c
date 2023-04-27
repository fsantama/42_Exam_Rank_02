/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:49:21 by fsantama          #+#    #+#             */
/*   Updated: 2023/04/27 13:16:32 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	skip_whitespace(char *str, int i)
{
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	return (i);
}

int	ft_wordlen(char *str)
{
	int i = 0;

	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
		i++;
	return (i);
}
// Función que imprime la cadena con un espacio entre palabras
void	epur_str(char *str)
{
	int i = 0;
	int first_word = 1; // Vale 1 para que no imprima espacio la primera vez
	int word_len;

	i = skip_whitespace(str, i); // Saltamos espacios iniciales
	while (str[i] != '\0')
	{
		if (first_word == 0)
			write(1, " ", 1);
		word_len = ft_wordlen(str + i); // Calculamos logitud de la palabra
		write(1, str + i, word_len); // Imprimimos la palabra
		i = i + word_len; // Posicionamos el índice justo después de la palabra
		first_word = 0; // Cambiamos el valor para imprimir un espacio
		i = skip_whitespace(str, i); // Saltamos los espacios
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		epur_str(argv[1]);
	write(1, "\n", 1);
	return (0);
}
