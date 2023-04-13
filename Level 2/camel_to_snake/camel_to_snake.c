/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 13:42:39 by fsantama          #+#    #+#             */
/*   Updated: 2023/04/13 14:22:48 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

// Función para obtener la longitud de una cadena
int	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

// Función para convertir un carácter a minúscula
char	ft_tolower(char c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + ('a' - 'A');
	return (c);
}

// Función para convertir una cadena de lowerCamelCase a snake_case
void	ft_camel_to_snake(char *str)
{
	char	*result;
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (str == NULL || *str == '\0')
		exit (1);
	result = (char *)malloc(ft_strlen(str) * sizeof(char)); // Se reserva memoria
	if (result == NULL)
	{
		write(2, "Error: No se pudo asignar memoria\n", 32);
		exit(1);
	}
	while (str[i] != '\0')
	{
		// Se encuentra una letra mayúscula que marca el inicio de una nueva palabra
		if (i > 0 && (str[i] >= 'A' && str[i] <= 'Z'))
		{
			result[j++] = '_'; // Se agrega un guión bajo al resultado
		} 
		//Se convierte la letra a minúscula y se agrega al resultado
		result[j++] = ft_tolower(str[i]);
		i++;
	}
	result[j] = '\0'; // Se agrega el carácter nulo al final del resultado
	write(1, result, ft_strlen(result)); // Se imprime el resultado
	free(result); // Se libera la memoria asignada
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
