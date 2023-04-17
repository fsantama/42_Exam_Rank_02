/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 17:30:01 by fsantama          #+#    #+#             */
/*   Updated: 2023/04/17 17:45:04 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*dst;

	i = 0;
	// Calcular la longitud de la cadena fuente
	while (src[i] != '\0')
		i++;
	// Asignar memoria para la nueva cadena
	dst = (char *)malloc((i + 1) * sizeof(char));
	if (dst == NULL) // Verificar si se pudo asignar memoria
		return (NULL);
	// Copiar la cadena fuente a la nueva cadena
	i = 0; //Se reinicia para que no esté en su última posición
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0'; // Agregar el carácter nulo de terminación
	return (dst);
}
