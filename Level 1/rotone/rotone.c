/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 18:56:43 by fsantama          #+#    #+#             */
/*   Updated: 2023/05/17 14:17:45 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// Function to apply rotation to a letter in alphabetical order
void	rotone(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{	
			// Add 1 to advance to the next letter in alphabetical order
			str[i] = 'a' + ((str[i] - 'a' + 1) % 26);
			ft_putchar(str[i]);
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = 'A' + ((str[i] - 'A' + 1) % 26);
			ft_putchar(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rotone(argv[1]);
	write(1, "\n", 1);
	return (0);
}
