/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 18:56:43 by fsantama          #+#    #+#             */
/*   Updated: 2023/04/12 19:09:07 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Función para verificar si un carácter es alfabético
int	ft_is_alpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

// Función para aplicar rotación a una letra en orden alfabético
char	ft_rotone(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = 'a' + ((c - 'a' + 1) % 26);
		// se suma 1 para avanzar a la siguiente letra en orden alfabético
	}
	else if (c >= 'A' && c <= 'Z')
	{
		c = 'A' + ((c - 'A' + 1) % 26);
		// se suma 1 para avanzar a la siguiente letra en orden alfabético
	}
	return (c);
}

// Función principal
int	main(int argc, char **argv)
{
	char	*str;
	char	c;
	int	i;

	if (argc == 2)
	{
		str = argv[1];
		i = 0;
		while (str[i] != '\0')
		{
			if (ft_is_alpha(str[i]))
			{
				c = ft_rotone(str[i]);
				write(1, &c, 1);
			}
			else
			{
				write(1, &str[i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
