/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:54:22 by fsantama          #+#    #+#             */
/*   Updated: 2023/04/12 14:44:58 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Función auxiliar para escribir un carácter en la salida estándar
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// Función auxiliar para escribir una cadena de caracteres en la salida estándar
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

// Función auxiliar para convertir un número entero en una cadena de caracteres 
// y escribirlo en la salida estándar
void	ft_putnbr(int n)
{
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + 48); // Se imprime el dígito convertido en carácter
}

// Función para imprimir "fizz", "buzz", "fizzbuzz" o el número según toque
void	print_fizzbuzz(int i)
{
	if (i % 3 == 0 && i % 5 == 0)
		ft_putstr("fizzbuzz");
	else if (i % 3 == 0)
		ft_putstr("fizz");
	else if (i % 5 == 0)
		ft_putstr("buzz");
	else
		ft_putnbr(i);
}

int	main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		print_fizzbuzz(i); // función para imprimir el número o el texto
		ft_putchar('\n'); // salto de línea después de cada número o texto
		i++;
	}
	return (0);
}
