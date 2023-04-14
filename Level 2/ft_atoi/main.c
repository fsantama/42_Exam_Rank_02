/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 13:07:56 by fsantama          #+#    #+#             */
/*   Updated: 2023/04/14 13:21:18 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	ft_atoi(const char *str);

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("ft_atoi(\"%s\") = %d\n", argv[1], ft_atoi(argv[1]));
	}
	return(0);
}
