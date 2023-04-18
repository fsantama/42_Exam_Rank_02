/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 13:42:39 by fsantama          #+#    #+#             */
/*   Updated: 2023/04/18 17:27:50 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

// Función para convertir una cadena de lowerCamelCase a snake_case
void	ft_camel_to_snake(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		// Se encuentra una letra mayúscula que marca el inicio de una nueva palabra
		if (str[i] >= 'A' && str[i] <= 'Z')
		{

			str[i] = str[i] + 32;
		  	write (1, "_", 1); // Se agrega un guión bajo al resultado
		} 
		// Se escriben los demás caracteres
		write (1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_camel_to_snake(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
