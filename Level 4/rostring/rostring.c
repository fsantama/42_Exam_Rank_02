/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:57:55 by fsantama          #+#    #+#             */
/*   Updated: 2023/05/09 18:12:41 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int len;

    len = 0;
    while (str[len])
        len++;
    return (len);
}

int	ft_word_count(char *str)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
			i++;
		if (str[i] && (str[i] != ' ' && str[i] != '\n' && str[i] != '\t'))
			count++;
		while (str[i] && (str[i] != ' ' && str[i] != '\n' && str[i] != '\t'))
			i++;
	}
	return (count);
}

char	*ft_strndup(char *src, int n)
{
	char	*dst;
	int	i;

	dst = (char *) malloc(sizeof(char) * (n + 1));
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

char	**ft_split(char *str)
{
	char	**arr;
	int		i;
	int		j;
	int		k;
	int		wc;

	wc = ft_word_count(str);
	arr = (char **)malloc(sizeof(char *) * (wc + 1));
	if (!arr)
		return (NULL);
	i = 0;
	j = 0;
	while (i < wc)
	{
		while (str[j] && (str[j] == ' ' || str[j] == '\n' || str[j] == '\t'))
			j++;
		k = j;
		while (str[j] && (str[j] != ' ' && str[j] != '\n' && str[j] != '\t'))
			j++;
		arr[i] = ft_strndup(&str[k], j - k);
		i++;
	}
	arr[i] = NULL;
	return (arr);
}

void	rostring(char **words)
{
	int	i;

	i = 1;  // Ignoramos la primera palabra
	while (words[i])
	{
		write(1, words[i], ft_strlen(words[i]));
		write(1, " ", 1);
		i++;
	}
	if (words[0])
		write(1, words[0], ft_strlen(words[0]));
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;
	char	**words;

	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	words = ft_split(argv[1]);
	if (!words)
	{
		write(2, "Error: malloc failed\n", 21);
		return (1);
	}
	rostring(words);
	// Liberamos la memoria
	i = 0;
	while (words[i])
	{
		free(words[i]);
		i++;
	}
	free(words);
	return (0);
}

