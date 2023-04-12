#include <unistd.h>
// #include <stdlib.h>
// #include <stdio.h>

// Función para escribir una cadena de caracteres en la salida estándar utilizando la función write
void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1); // Se escribe el carácter en la salida estándar
		i++;
	}
}

/*
int	main(int argc, char **argv)
{
	if(argc == 1)
	{
		printf("Use: ./a.out \" \" \n");
		return(0);
	}
	ft_putstr(argv[1]);
	printf("\n");
	return(0);
}
*/
