//5.- Crear un programa que cuente cuantos m�ltiplos de 3 existen entre 0 y un n�mero definido por el usuario, luego imprimir esos m�ltiplos en pantalla.
//5.- Create a program that counts how many multiples of 3 exists between 0 and a number defined by the user, then print the multiples.

//Libraries
#include <stdio.h>

//Functions
int main()
{
    //Variables
    int number, sum = 0;

    //Input Data (From User)
    printf("Please enter the limit: ");
    scanf("%d", &number);

    //Operations
    for(int counter = 1; counter <= number; counter++)
    {
        if(counter % 3 == 0)
        {
            printf("%d is a multiple of 3\n", counter);
            sum++;
        }
    }

    return 0;
}
