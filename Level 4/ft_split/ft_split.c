/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:54:18 by fsantama          #+#    #+#             */
/*   Updated: 2023/05/08 12:55:29 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_word_count(char *str)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		// Ignoramos los espacios en blanco al inicio de la palabra
		while (str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
			i++;
		// Si encontramos una letra, incrementamos el contador de palabras
		if (str[i] && (str[i] != ' ' && str[i] != '\n' && str[i] != '\t'))
			count++;
		// Ignoramos el resto de la palabra actual
		while (str[i] && (str[i] != ' ' && str[i] != '\n' && str[i] != '\t'))
			i++;
	}
	return (count);
}

char	*ft_strndup(char *src, int n)
{
	char	*dst;
	int		i;

	dst = (char *)malloc(sizeof(char) * (n + 1));
	if (!dst)
		return (NULL);
	i = 0;
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
	dst[n] = '\0';
	return (dst);
}

char	**ft_split(char *str)
{
	char	**arr;
	int		i;
	int		j;
	int		k;
	int		wc;

	wc = ft_word_count(str);
	arr = (char **)malloc(sizeof(char *) * (wc + 1));
	if (!arr)
		return (NULL);
	i = 0;
	j = 0;
	while (i < wc)
	{
		// Ignoramos los espacios en blanco al inicio de la palabra
		while (str[j] && (str[j] == ' ' || str[j] == '\n' || str[j] == '\t'))
			j++;
		// Guardamos la posición inicial de la palabra
		k = j;
		// Ignoramos el resto de la palabra actual
		while (str[j] && (str[j] != ' ' && str[j] != '\n' && str[j] != '\t'))
			j++;
		// Guardamos la palabra en el array
		arr[i] = ft_strndup(&str[k], j - k);
		i++;
	}
	// Añadimos un puntero nulo al final del array para indicar su fin
	arr[i] = NULL;
	return (arr);
}
