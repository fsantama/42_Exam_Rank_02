/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:27:39 by fsantama          #+#    #+#             */
/*   Updated: 2023/05/10 13:59:04 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

//Debido al enuncuado, siempre será un nº positivo, necesitamos una versión
//reducida de ft_putnbr
void	ft_putnbr(int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + '0');
}

// Debido al enunciado, siempre será un nº positivo, necesitamos una version
// reducida de ft_atoi
int	ft_atoi(char *str)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			n = n * 10 + (str[i] - '0');
			i++;
		}
		else
			return (0);
	}
	return (n);
}

// En esta función imprimimos toda la estructura de la tabla
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
	else
		write(1, "\n", 1);
	return (0);
}
