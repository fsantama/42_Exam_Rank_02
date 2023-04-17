/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 17:36:00 by fsantama          #+#    #+#             */
/*   Updated: 2023/04/17 17:41:53 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src);

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		printf("ft_strdup("") = %s\n", ft_strdup(""));
		return (0);
	}
	else
		printf("ft_strdyp(%s) = %s\n", argv[1], ft_strdup(argv[1]));
	return (0);
}
