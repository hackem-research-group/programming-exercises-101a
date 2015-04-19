//3.- Crear un programa para calcular el factorial de un número entero y positivo.
//3.- Create a program to calculate Factorial of a Number (Integer and Positive).

//Libraries
#include <stdio.h>

//Functions
int factorial(int number)
{
    int temp;

    if(number <= 1) return 1;

    temp = number * factorial(number - 1);
    return temp;
}

int main()
{
    //Variables
    int number;

    //Input Data (From User)
    printf("Please enter a positive integer: ");
    scanf("%d", &number);

    //Operations
    if (number < 0)
    {
        //Output 1
        printf("That is not a positive integer.\n");
    }
    else
    {
        //Output 2
        printf("%d factorial is: %d", number, factorial(number));
    }

    return 0;
}
