/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:54:00 by fsantama          #+#    #+#             */
/*   Updated: 2023/04/18 16:49:13 by fsantama         ###   ########.fr       */
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
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
		ft_print_first_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}
