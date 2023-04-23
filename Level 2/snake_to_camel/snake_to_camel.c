/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 21:22:36 by fsantama          #+#    #+#             */
/*   Updated: 2023/04/23 21:28:34 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Esta función recorre la cadena y la imprime. En el caso de que encuentre "_"
// lo salta y convierte en mayúscula el siguiente caracter
void	snake_to_camel(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if(str[i] == '_')
		{
			i++;
			str[i] = str[i] - 'a' + 'A';
		}
		write(1, &str[i], 1);
		i++;
	}
}


int	main(int argc, char **argv)
{
	if (argc == 2)
		snake_to_camel(argv[1]);
	write(1, "\n", 1);
	return (0);
}
