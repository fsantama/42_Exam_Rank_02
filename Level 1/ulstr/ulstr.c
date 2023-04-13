/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 12:19:05 by fsantama          #+#    #+#             */
/*   Updated: 2023/04/13 12:39:15 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	char	c;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			c = argv[1][i];
			if (c >= 'a' && c <= 'z')
				c = c - 'a' + 'A'; // Minúscula a mayúscula
			else if (c >= 'A' && c <= 'Z')
				c = c - 'A' + 'a'; // Mayúscula a minúscula
			write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
