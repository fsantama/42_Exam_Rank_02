/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 17:48:13 by fsantama          #+#    #+#             */
/*   Updated: 2023/04/12 18:45:29 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Función para verificar si un carácter es alfabético
int	ft_is_alpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

// Función para aplicar ROT13 a un carácter
char	ft_rot_13(char c)
{
	if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
	{
		c = c + 13;
	}
	else if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
	{
		c = c - 13;
	}
	return (c);
}

// Función principal
int	main(int argc, char **argv)
{
	int	i;
	char	c;
	char	*str;

	i = 0;
	str = argv[1];
	if (argc == 2)
	{
		while (str[i] != '\0')
		{
			if (ft_is_alpha(str[i]))
			{
				c = ft_rot_13(str[i]);
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
