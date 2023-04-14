/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 14:44:07 by fsantama          #+#    #+#             */
/*   Updated: 2023/04/14 15:05:24 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject);

int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("ft_strcspn(%s, %s) = %zu\n",
			argv[1], argv[2], ft_strcspn(argv[1], argv[2]));
	return(0);
}
