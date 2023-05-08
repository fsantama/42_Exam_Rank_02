/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:36:24 by fsantama          #+#    #+#             */
/*   Updated: 2023/05/08 12:42:59 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int nbr);

int	main(int argc, char **argv)
{
	int n;
	char *str;
		
	n = atoi(argv[1]);
	str = ft_itoa(n);
	if (argc != 2)
	{
		printf("Usage: %s <number>\n", argv[0]);
		return (1);
	}
	printf("%d -> %s\n", n, str);
	free(str);
	return (0);
}

