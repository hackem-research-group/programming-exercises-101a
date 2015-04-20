//4.- Crear un programa para convertir calificaciones numéricas de acuerdo a la siguiente tabla:
//A = 19 y 20, B = 16, 17 y 18, C = 13, 14 y 15, D = 10, 11 y 12, E = 1 to 9. (Asuma que las calificaciones están entre 1 y 20)

//4.- Create a program to convert numeric grades according to the following table:
//A = 19 and 20, B = 16, 17 and 18, C = 13, 14 and 15, D = 10, 11 and 12, E = 1 to 9. (Assume that student grades are between 1 to 20)

//Libraries
#include <stdio.h>

//Functions
int main()
{
    //Variables
    int grade;

    //Input Data (From User)
    printf("Please enter the grade: ");
    scanf("%d", &grade);

    //Operations
    if(grade == 19 || grade == 20)
    {
        printf("Tu nota es A\n");
    }
    else
    {
        if(grade <= 18 && grade >= 16)
        {
            printf("Tu nota es B\n");
        }
        else
        {
            if(grade <= 15 && grade >= 13)
            {
                printf("Tu nota es C\n");
            }
            else
            {
                if(grade <= 12 && grade >= 10)
                {
                    printf("Tu nota es D\n");
                }
                else
                {
                    if(grade <= 9 && grade >= 1)
                    {
                        printf("Tu nota es E\n");
                    }
                    else
                    {
                        printf("Fuera de rango (0-20)\n");
                    }
                }
            }
        }
    }

    //End of the Program
    return 0;
}
