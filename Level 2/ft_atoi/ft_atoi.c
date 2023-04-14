/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 12:58:43 by fsantama          #+#    #+#             */
/*   Updated: 2023/04/14 13:10:33 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	sign; // Variable para almacenar el signo del número
	int	result; // Variable para almacenar el resultado

	sign = 1;
	result = 0;
	// Determinar el signo del número
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
	{
		str++;
	}
	// Convertir caracteres a enteros y acumular en el resultado
	while (*str >= '0' && *str <= '9')
	{
		result = (result * 10) + (*str - '0');
		str++;
	}
	// Multiplicar el resultado por el signo y devolverlo
	return (sign * result);
}
