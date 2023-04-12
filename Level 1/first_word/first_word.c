#include <unistd.h>

void ft_print_first_word(const char *str)
{
    int i = 0;
    // Saltar espacios y tabulaciones iniciales
    while (str[i] == ' ' || str[i] == '\t') 
    {
        i++;
    }
    // Imprimir primera palabra seguida de un salto de línea
    while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t') 
    {
        write(1, &str[i], 1);
        i++;
    }
    write(1, "\n", 1);
}

int main(int argc, char **argv) 
{
    if (argc == 2) 
    {
        ft_print_first_word(argv[1]);
    } else 
    {
        write(1, "Uso: ", 5);
        int i = 0;
        // Escribir el nombre del programa en la salida estándar
        while (argv[0][i] != '\0') 
	{
            write(1, &argv[0][i], 1);
            i++;
        }
        write(1, " <cadena>\n", 11);
    }
    return 0;
}

