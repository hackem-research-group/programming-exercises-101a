//2.- Crear un programa que tome como entrada la velocidad de un vehículo en km/h e imprima la misma velocidad en m/s.
//2.- Create a program that takes as input a vehicle's speed in km/h and shows the same speed in m/s.

//Libraries
#include <stdio.h>

//Functions
int main()
{
    //Variables
    float speedKm, speedMs;

    //Input Data (From User)
    printf("Please write the speed in km/s: ");
    scanf("%f", &speedKm);

    //Operations
    speedMs = ((speedKm * 1000) / 3600);

    /* With this piece of code we can customize the number of decimals to show in our answer
    float number = 235.36558;
    printf("%.2f", number); // Podemos elegir el número de decimales deseados a mostrar en la respuesta
    */

    //Output
    printf("%f km/s -> %f m/s", speedKm, speedMs);

    //End of the Program
    return 0;
}
