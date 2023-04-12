//#include <stdio.h>

// Declaración de la función ft_swap
void ft_swap(int *a, int *b)
{
	int	temp;

	// Variable temporal para almacenar el valor de a
	temp = *a;
	// Asignar el valor de b a a
	*a = *b;
	// Asignar el valor temporal a b
	*b = temp;
}
/*
int main()
{
    int num1 = 10;
    int num2 = 20;
    
    printf("Antes del intercambio: num1 = %d, num2 = %d\n", num1, num2); 
    // Llamada a la función ft_swap pasando las direcciones de memoria de num1 y num2
    ft_swap(&num1, &num2);
    printf("Después del intercambio: num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}
*/
