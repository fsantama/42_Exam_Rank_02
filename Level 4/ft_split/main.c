/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:55:40 by fsantama          #+#    #+#             */
/*   Updated: 2023/05/08 12:58:58 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char *str);

int	main(int argc, char **argv)
{
	char	**arr;
	int		i;

	if (argc == 2)
	{
		arr = ft_split(argv[1]);
		if (!arr)
		{
			printf("Error: memory allocation failed\n");
			return (1);
		}
		i = 0;
		while (arr[i])
		{
			printf("%s\n", arr[i]);
			i++;
		}
		// Liberamos la memoria asignada a cada cadena
		i = 0;
		while (arr[i])
		{
			free(arr[i]);
			i++;
		}
		// Liberamos la memoria asignada al array
		free(arr);
	}
	else
		printf("Usage: %s <string>\n", argv[0]);
	return (0);
}
