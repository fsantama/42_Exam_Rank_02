/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:17:15 by fsantama          #+#    #+#             */
/*   Updated: 2023/05/05 16:22:36 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	str_capitalizer(char *str)
{	
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] - 'A' + 'a';
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] == ' ' || str[i - 1] == '	' || str[i - 1] == 0)
				str[i] = str[i] - 'a' + 'A';
		}
		write (1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
}
// La i se inicializa en 1 para saltar el nombre del programa

int	main(int argc, char **argv)
{
	int	i;

	if (argc > 1)
	{
		i = 1;
		while (argv[i])
		{
			str_capitalizer(argv[i]);
			i++;
		}
	}
	else
		write (1, "\n", 1);
	return (0);
}
