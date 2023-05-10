/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 21:53:29 by fsantama          #+#    #+#             */
/*   Updated: 2023/05/10 12:49:45 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	search_and_replace(char *str, char *s1, char *s2)
{
	int	i;

	i = 0;
	// Check if search and replace characters are valid
	if ((((s1[i] >= 'a' && s1[i] <= 'z')
				|| (s1[i] >= 'A' && s1[i] <= 'Z'))
			&& (s1[i + 1] == 0)
			&& ((s2[i] >= 'a' && s2[i] <= 'z')
				|| (s2[i] >= 'A' && s2[i] <= 'Z'))
			&& (s2[i + 1] == 0)))
	{
		// Loop through the input string
		while (str[i])
		{
			// Perform replacement if character equals search character
			if (str[i] == s1[0])
				str[i] = s2[0];
			// Write the current character to standard output
			ft_putchar(str[i]);
				// Advance to the next character in the string
				i++;
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc == 4)
		search_and_replace(argv[1], argv[2], argv[3]);
	write(1, "\n", 1);
	return (0);
}
