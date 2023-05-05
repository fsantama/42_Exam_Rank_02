/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:27:39 by fsantama          #+#    #+#             */
/*   Updated: 2023/05/05 16:51:55 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb >= 10)
		ft_putnbr(nb / 10);
	nb = (nb % 10) + '0';
	write(1, &nb, 1);
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

void	tab_mult(int n)
{
	int	i;

	i = 1;
	while (i <= 9)
	{
		ft_putnbr(i);
		write (1, " x ", 3);
		ft_putnbr(n);
		write (1, " = ", 3);
		ft_putnbr(i * n);
		write(1, "\n", 1);
		i++;
	}	
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		tab_mult(ft_atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}