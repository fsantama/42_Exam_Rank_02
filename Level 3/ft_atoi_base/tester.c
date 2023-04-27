/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:47:38 by fsantama          #+#    #+#             */
/*   Updated: 2023/04/27 13:47:47 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_atoi_base(const char *str, int str_base);

int main()
{
    char *test_cases[] = {"101010", "123", "7B", "FF", "1B8", "ABCDEF"};
    int bases[] = {2, 10, 16, 16, 12, 16};
    int expected_results[] = {42, 123, 123, 255, 432, 11259375};
    int num_tests = sizeof(test_cases) / sizeof(char*);

    for (int i = 0; i < num_tests; i++)
    {
        int result = ft_atoi_base(test_cases[i], bases[i]);
        if (result == expected_results[i])
        {
            printf("Test case %d passed\n", i+1);
        }
        else
        {
            printf("Test case %d failed: expected %d but got %d\n", i+1, expected_results[i], result);
        }
    }

    return 0;
}

