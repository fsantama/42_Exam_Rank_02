/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 10:12:30 by fsantama          #+#    #+#             */
/*   Updated: 2023/05/04 10:51:40 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//En esta función iteramos a través de la segunda cadena. Si el caracter actual 
//en s1 es igual al caracter actual en la segunda cadena, avanzamos s1.
//Si hemos llegado al final de la primera cadena, significa que está contenido
//en la segunda cadena, así que cambiamos el valor de "found" para imprimir 1.
void	hidenp(char *s1, char *s2)
{
	int	i;
	int	j;
	int	found;

	i = 0;
	j = 0;
	found = 0;
	while (s2[j])
	{
		if (s1[i] == s2[j])
		{
			i++;
			if (s1[i] == 0)
				found = 1;
		}
		j++;
	}
	if (found == 1)
		write(1, "1", 1);
	else
		write(1, "0", 1);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		hidenp(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
