//6.- Crear un programa que reciba 2 numeros y los imprima de mayor a menor (si es el caso).
//6.- Create a program that receives 2 numbers and print them from highest to lowest (if possible).

//Libraries
#include <stdio.h>

//Functions
int main()
{
    //Variables
    int num1, num2;

    //Input Data (From User)
    printf("Please enter the first number: ");
    scanf("%d", &num1);

    printf("Please enter the second number: ");
    scanf("%d", &num2);

    //Operations
    if(num1 > num2)
    {
        //Output 1
        printf("The numbers in descending order (from highest to lowest) are: %d %d\n", num1, num2);
    }
    else
    {
        if(num1 < num2)
        {
            //Output 2
            printf("The numbers in descending order (from highest to lowest) are: %d %d\n", num2, num1);
        }
        else
        {
            //Output 3
            printf("The numbers are EQUAL ");
        }
    }

    //End of the Program
    return 0;
}
