/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 16:30:16 by fsantama          #+#    #+#             */
/*   Updated: 2023/04/12 17:18:34 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Función para repetir un carácter n veces en la salida estándar
void	ft_repeat_char(char c, int n)
{
	while (n > 0)
	{
		write(1, &c, 1);
		n--;
	}
}

// Función principal
int	main(int argc, char **argv)
{
	char	*str;
	int	i;
	int	n;

	i = 0;
	n = 0;
	if (argc == 2)
	{
		str = argv[1];
		while (str[i] != '\0')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				n = str[i] - 'a' + 1;
			else if (str[i] >= 'A' && str[i] <= 'Z')
				n = str[i] - 'A' + 1;
			ft_repeat_char(str[i], n);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
