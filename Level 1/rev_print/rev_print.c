/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 17:25:43 by fsantama          #+#    #+#             */
/*   Updated: 2023/05/18 16:18:32 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Function to get the length of a string
int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

// Function to print backwards a string of characters
void	ft_rev_print(char *str)
{
	int	len;

	len = ft_strlen(str);
	while (len > 0)
	{
		len--; // We decrement before to skip the NULL
		write(1, &str[len], 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_rev_print(argv[1]);
	write(1, "\n", 1);
	return (0);
}
