/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 13:03:52 by fsantama          #+#    #+#             */
/*   Updated: 2023/05/10 13:12:34 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

// Función para reflejar alfabéticamente una cadena de caracteres
void	ft_alpha_mirror(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c >= 'a' && c <= 'z')
			c = 'z' - (c - 'a'); // Calcula el carácter restando la distancia
		else if (c >= 'A' && c <= 'Z')
			c = 'Z' - (c - 'A'); // Calcula el carácter restando la distancia
		ft_putchar(c);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_alpha_mirror(argv[1]);
	write(1, "\n", 1);
	return (0);
}
