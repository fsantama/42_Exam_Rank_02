/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:50:43 by fsantama          #+#    #+#             */
/*   Updated: 2023/04/12 16:18:34 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
	{
		// Manejo de errores: uno o ambos punteros son NULL
		printf("Error: uno o ambos punteros son NULL\n");
		return (NULL);
	}
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0'; // Agregar carácter nulo de terminación de cadena
	return (s1);
}
/*
int	main(int argc, char **argv)
{
	char	*str;

	if (argc < 2)
	{
		printf("Uso: %s <cadena>\n", argv[0]);
		return (1);
	}
	*str = malloc(sizeof(char) * 100);
	if (str == NULL)
	{
		printf("Error: no se pudo asignar memoria\n");
		return (1);
	}
	if (ft_strcpy(str, argv[1]) != NULL)
	{
		printf("ft_strcpy(*s1, \"%s\") = %s\n", argv[1], ft_strcpy(str, argv[1]));
	}
	free(str);
	return (0);
}
*/
