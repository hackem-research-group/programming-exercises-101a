//1.- Crear un programa que reciba como entrada un n�mero cualquiera N y muestre si dicho n�mero es par o impar.
//1.- Create a program that receives a number N as input and shows if it is odd or even.

//Libraries
#include <stdio.h>

//Functions
int main()
{
	//Variables
    int number = 0;

	//Input Data (From User)
    printf("Input a number: \n"); //Ingrese un n�mero
    scanf("%d", &number);

	//Operations
    if(number % 2 == 0)
    {
		//Output 1
        printf("The number is even"); //El n�mero es par
    }
    else
    {
		//Output 2
        printf("The number is odd"); //El n�mero es impar
    }

	//End of the Program
    return 0;
}
