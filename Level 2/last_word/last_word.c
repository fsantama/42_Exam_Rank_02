/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 19:16:12 by fsantama          #+#    #+#             */
/*   Updated: 2023/04/23 19:49:57 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Función para calcular la longitud de una cadena 
int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != 0)
		len++;
	return (len);
}
// Función que primero busca el final de la cadena, luego retrocede hasta encontrar la primera palabra y, por último, la imprime
void	last_word(char *str)
{
	int	i;

	// le restamos 1 a la variable i para que no empiece en nulo.
	i = (ft_strlen(str) - 1);
	// con este primer bucle nos aseguramos de saltar todos los espacios y tabulaciones del final 
	while (str[i] == ' ' || str[i] == '\t')
		i--;
	// aquí retrocedemos hasta encontrar la última palabra
	while (str[i] != ' ' && str[i] != '\t' && str[i] != 0)
		i--;
	//le sumamos 1 a la varaible i para ponerla en la posición de la última palabra;
	i += 1;
	// imprimimos la última palabra
	while (str[i] != ' ' && str[i] != '\t' && str[i] != 0)
	{
		write (1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		last_word(argv[1]);
	write (1, "\n", 1);
	return (0);
}
