/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev.wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 13:13:40 by fsantama          #+#    #+#             */
/*   Updated: 2023/05/08 18:02:10 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

// Función que devuelve la longitud de una cadena.
int ft_strlen(char *str)
{
    int len;

    len = 0;
    while (str[len])
        len++;
    return (len);
}
// Función que imprime una cadena en la salida estándar.
void ft_putstr(char *str)
{
    write(1, str, ft_strlen(str));
}

// Función que libera la memoria asignada a una matriz de cadenas.
void ft_free_tab(char **tab)
{
    int i;

    i = 0;
    while (tab[i])
    {
        free(tab[i]);
        i++;
    }
    free(tab);
}

char    *ft_strndup(char *src, int n)
{
    char    *dst;
    int     i;

    dst = (char *)malloc(sizeof(char) * (n + 1));
    if (!dst)
        return (NULL);
    i = 0;
    while (i < n)
    {
        dst[i] = src[i];
        i++;
    }
    dst[n] = '\0';
    return (dst);
}

int ft_word_count(char *str)
{
    int count;
    int i;

    count = 0;
    i = 0;
    while (str[i])
    {
        // Ignoramos los espacios en blanco al inicio de la palabra
        while (str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
            i++;
        // Si encontramos una letra, incrementamos el contador de palabras
        if (str[i] && (str[i] != ' ' && str[i] != '\n' && str[i] != '\t'))
            count++;
        // Ignoramos el resto de la palabra actual
        while (str[i] && (str[i] != ' ' && str[i] != '\n' && str[i] != '\t'))
            i++;
    }
    return (count);
}
// Función que divide una cadena en palabras y las almacena en una matriz de cadenas.
char    **ft_split(char *str)
{
    char    **arr;
    int     i;
    int     j;
    int     k;
    int     wc;

    wc = ft_word_count(str);
    arr = (char **)malloc(sizeof(char *) * (wc + 1));
    if (!arr)
        return (NULL);
    i = 0;
    j = 0;
    while (i < wc)
    {
        // Ignoramos los espacios en blanco al inicio de la palabra
        while (str[j] && (str[j] == ' ' || str[j] == '\n' || str[j] == '\t'))
            j++;
        // Guardamos la posición inicial de la palabra
        k = j;
        // Ignoramos el resto de la palabra actual
        while (str[j] && (str[j] != ' ' && str[j] != '\n' && str[j] != '\t'))
            j++;
        // Guardamos la palabra en el array
        arr[i] = ft_strndup(&str[k], j - k);
        i++;
    }
    // Añadimos un puntero nulo al final del array para indicar su fin
    arr[i] = NULL;
    return (arr);
}

void	rev_wstr(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	//Disminuimos en 1 la i para no imprimir un espacio, ya que apunta a NULL
	i--;
	while (i >= 0)
	{
		ft_putstr(str[i]);
		i--;
		// Para separar cada palabra
		if (i >= 0)
			ft_putstr(" ");
	}
}
// Función principal.
int main(int argc, char **argv)
{
    if (argc == 2)
	{
        rev_wstr(ft_split(argv[1]));
		ft_free_tab(ft_split(argv[1]));
	}
    write(1, "\n", 1);
    return (0);
}
