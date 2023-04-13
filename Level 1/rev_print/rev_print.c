/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 17:25:43 by fsantama          #+#    #+#             */
/*   Updated: 2023/04/12 17:33:16 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Función para obtener la longitud de una cadena de caracteres
int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

// Función para imprimir una cadena de caracteres al revés
void	ft_rev_print(char *str)
{
	int	len;

	len = ft_strlen(str);
	while (len > 0)
	{
		len--;
		write(1, &str[len], 1);
	}
	write(1, "\n", 1);
}

// Función principal
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_rev_print(argv[1]);
	}
	else
	{
		write(1, "\n", 1);
	}
	return (0);
}