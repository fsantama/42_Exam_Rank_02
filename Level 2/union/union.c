/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 22:17:54 by fsantama          #+#    #+#             */
/*   Updated: 2023/04/23 22:21:41 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_union(char *str1, char *str2)
{
	char	ascii[256] = {0}; // Array para almacenar el conjunto de caracteres
	int	i;

	i = 0;
	while (str1[i])
	{
	// Si el caracter no ha sido agregado anteriormente, lo agrega al array
		if (!ascii[(unsigned char)str1[i]])
		{
			ascii[(unsigned char)str1[i]] = 1;
			write(1, &str1[i], 1);
		}
		i++;
	}
	i = 0;
	while (str2[i])
	{
	// Si el caracter no ha sido agregado anteriormente, lo agrega al array
		if (!ascii[(unsigned char)str2[i]])
		{
			ascii[(unsigned char)str2[i]] = 1;
			write(1, &str2[i], 1);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}

