/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:34:25 by fsantama          #+#    #+#             */
/*   Updated: 2023/04/27 13:37:54 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi_base(const char *str, int str_base);

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d\n", ft_atoi_base(argv[1], atoi(argv[2])));
	}
	return (0);
}
