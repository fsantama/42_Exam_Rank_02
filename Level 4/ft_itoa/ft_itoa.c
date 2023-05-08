/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:32:06 by fsantama          #+#    #+#             */
/*   Updated: 2023/05/08 12:46:11 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_intlen(int n)
{
	int len;

	len = 1;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n > 9)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	int n;
	char *str;

	n = ft_intlen(nbr);
	str = (char *) malloc(sizeof (char) * n);
	str[n] = 0;
	if(nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	if (nbr == 0)
	{
	str[0] = '0';
		return (str);
	}
	while (nbr > 0)
	{
		n--;
		str[n] = (nbr % 10) + 48;
		nbr /=  10;
	}
	return (str);
}
