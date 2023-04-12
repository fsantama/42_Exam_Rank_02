//#include <stdlib.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int len; // Variable para contar la longitud del string

	len = 0;
	// Recorremos el string hasta encontrar el carácter nulo '\0'
	while (str[len] != '\0')
	{
		len++; // Incrementamos la longitud en cada iteración
	}

	return len; // Retornamos la longitud del string
}
/*
int main(int argc, char **argv)
{
    if(argc == 1)
    {
        printf("ft_strlen(\"\") = %d\n", ft_strlen(""));
        return(0);
    }
    printf("ft_strlen(\"%s\") = %d\n", argv[1], ft_strlen(argv[1]));
    return(0);
}
*/
