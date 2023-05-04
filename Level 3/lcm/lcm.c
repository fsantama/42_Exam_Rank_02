/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 10:54:42 by fsantama          #+#    #+#             */
/*   Updated: 2023/05/04 11:26:26 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Esta función calcula el mínimo común múltiplo de la siguiente manera:
// Primero, si alguno de los dos números es 0, el mcm será también 0.
// Segundo, se inicia n con el mayor valor de los dos números y empezamos a 
// buscar desde ahí. Si ese número es múltiplo de ambos, se devuele, si no,
// aumentamos n y seguimos buscando
unsigned int	lcm(unsigned int a, unsigned int b)
{
	int	n;

	n = 0;
	if (a == 0 || b == 0)
		return (0);
	if (a < b)
		n = b;
	else
		n = a;
	while (1)
	{
		if (n % a == 0 && n % b == 0)
			return (n);
		n++;
	}
}
