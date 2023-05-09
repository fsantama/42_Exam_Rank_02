/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 19:06:02 by fsantama          #+#    #+#             */
/*   Updated: 2023/05/09 19:20:59 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

typedef struct  s_point
{
    int           x;
    int           y;
}               t_point;

void	fill(char **tab, t_point size, t_point pos, char target, char fill)
{
	// Si la posición está fuera de los límites del área, se devuelve
	if (pos.x < 0 || pos.y < 0 || pos.x >= size.x || pos.y >= size.y)
		return;
	
	// Si el carácter en la posición actual no es el objetivo, se devuelve
	if (tab[pos.y][pos.x] != target)
		return;

	// Se cambia el carácter en la posición actual al carácter de relleno
	tab[pos.y][pos.x] = fill;

	// Se llama recursivamente a la función para las posiciones adyacentes
	fill(tab, size, (t_point){pos.x - 1, pos.y}, target, fill); // Izquierda
	fill(tab, size, (t_point){pos.x + 1, pos.y}, target, fill); // Derecha
	fill(tab, size, (t_point){pos.x, pos.y - 1}, target, fill); // Arriba
	fill(tab, size, (t_point){pos.x, pos.y + 1}, target, fill); // Abajo
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	char target = tab[begin.y][begin.x]; // Carácter objetivo
	char fill = 'F'; // Carácter de relleno

	// Se verifica si el carácter objetivo es igual al carácter de relleno.
	// En ese caso, no se realiza ninguna operación.
	if (target == fill)
		return;

	// Se llama a la función auxiliar para realizar el relleno recursivo
	fill(tab, size, begin, target, fill);
}

