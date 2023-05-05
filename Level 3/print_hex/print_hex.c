/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 10:37:43 by fsantama          #+#    #+#             */
/*   Updated: 2023/05/05 11:14:33 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_hex(int n)
{
	char	hex[17] = "0123456789abcdef";

	if (n >= 16)
		print_hex(n / 16);
	ft_putchar(hex[n % 16]);
}

int	ft_atoi(char *str)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			n = n * 10 + (str[i] - '0');
		else
			return (0);
		i++;
	}
	return (n);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		print_hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}
