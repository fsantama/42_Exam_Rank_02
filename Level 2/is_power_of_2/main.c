/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 19:02:55 by fsantama          #+#    #+#             */
/*   Updated: 2023/04/23 19:06:18 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	is_power_of_2(unsigned int n);

int main(int argc, char **argv)
{
    if(argc == 2)
    	printf("is_power_of_2(%s) = %d\n", argv[1], is_power_of_2(atoi(argv[1])));
    return(0);
}
