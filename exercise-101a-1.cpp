//1.- Crear un programa que reciba como entrada un número cualquiera N y muestre si dicho número es par o impar.
//1.- Create a program that receives a number N as input and shows if it is odd or even.

#include <stdio.h>

int main()
{
    int number = 0;

    printf("Input a number: \n"); //Ingrese un número
    scanf("%d", &number);

    if(number % 2 == 0)
    {
        printf("The number is even"); //El número es par
    }
    else
    {
        printf("The number is odd"); //El número es impar
    }

    return 0;
}
