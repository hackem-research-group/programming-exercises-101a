//7.- Crear un programa que calcule la hipotenusa de un triángulo rectángulo conociendo la longitud de sus catetos.
//7.- Create a program to calculate the hypotenuse of a right-angled triangle knowing the lengths of its legs.

//Libraries
#include <stdio.h>
#include <cmath>

//Functions
int main ()
{
    //Variables
    int leg1, leg2;
    double hyp;

    //Input Data (From User)
    printf ("Please enter the first number:\t");
    scanf ("%d", &leg1);

    printf ("Please enter the second number:\t");
    scanf ("%d", &leg2);

    //Operations
    hyp = sqrt(pow(leg1, 2) + pow(leg2, 2));

    //Output
    /* With this piece of code we can customize the number of decimals to show in our answer*/
    printf ("Hypotenuse is: %.2f\n", hyp); //Podemos elegir el número de decimales deseados a mostrar en la respuesta, en este caso 2 decimales

    //End of the Program
    return 0;
}
