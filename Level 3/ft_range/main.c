/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 13:51:48 by fsantama          #+#    #+#             */
/*   Updated: 2023/05/02 14:01:27 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int     *ft_range(int start, int end);

int main(void)
{
    int *arr1 = ft_range(1, 3);
    printf("arr1 = ");
    for (int i = 0; i <= 2; i++)
        printf("%d ", arr1[i]);
    printf("\n");

    int *arr2 = ft_range(-1, 2);
    printf("arr2 = ");
    for (int i = 0; i <= 3; i++)
        printf("%d ", arr2[i]);
    printf("\n");

    int *arr3 = ft_range(0, 0);
    printf("arr3 = ");
    for (int i = 0; i <= 0; i++)
        printf("%d ", arr3[i]);
    printf("\n");

    int *arr4 = ft_range(0, -3);
    printf("arr4 = ");
    for (int i = 0; i <= 3; i++)
        printf("%d ", arr4[i]);
    printf("\n");

    free(arr1);
    free(arr2);
    free(arr3);
    free(arr4);

    return (0);
}
/*
int main(int argc, char **argv)
{
	(void)argc;
	int	arr_len;
	int	*arr;

	arr_len = abs(atoi(argv[2]) - atoi(argv[1]));
	arr = ft_range(atoi(argv[1]), atoi(argv[2]));
	for (int i = 0; i <= arr_len; i += 1)
		printf("%d\n", arr[i]);
	free(arr);
	return (EXIT_SUCCESS);
}
*/
