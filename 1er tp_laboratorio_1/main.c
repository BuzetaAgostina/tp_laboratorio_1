#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include "funciones.h"

int main()
{

    char seguir='s';

    int opcion=0;

    float x;
    float y;

    int flagop1=0;
    int flagop2=0;

    do{
    system("color D0");






    if (flagop1==0)
        {
        printf("\n ::   C A L C U L A D O R A   E N  C   ::\n\n");
         printf("\n Ingresar 1er operando con el que trabajara (A=0.00): ");
         scanf("%f", &x);
        flagop1=1;
        }
    if (flagop2==0)
        {
        printf("\n Ingresar 2do operando con el que trabajara (B=0.00): ");
        scanf("%f", &y);
        flagop2=1;
        }

        system("cls");
        printf("\n ::   C A L C U L A D O R A   E N  C   ::");

        printf("\n\n\ |    M E N U  D E  O P C I O N E S    |\n\n");


        printf("1- Reingresar 1er operando (Actualmente A=%.2f)\n", x);
        printf("2- Reingresar 2do operando (Actualmente B=%.2f)\n", y);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        printf("Por favor seleccione una opcion: ");
        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:

                printf("Ingrese 1er operando: ");
                scanf("%f",&x);
                break;
            case 2:

                printf("Ingrese 2do operando: ");
                scanf("%f",&y);
                break;
            case 3:
                sumar (x,y);
                break;
            case 4:

                restar (x,y);
                break;
            case 5:
             dividir(x, y);
                break;
            case 6:

               multiplicar (x, y);
                break;
            case 7:
               factor(x, y);
                break;
            case 8:
                sumar (x,y);
                restar (x,y);
                dividir(x, y);
                multiplicar (x, y);
                factor(x, y);
                break;
            case 9:
                seguir = 'n';

                break;
        }
    printf("\nDesea continuar? s/n: ");
    fflush( stdin );
    scanf("%c",&seguir);
    seguir=tolower(seguir);


    }while(seguir=='s');

    return 0;


}
