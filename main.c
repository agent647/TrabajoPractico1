#include <stdio.h>
#include <stdlib.h>
#include "biblioTp1.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float a, b, suma, resta, multi, factorial;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                a = entradaUsuario();
                break;
            case 2:
                b = entradaUsuario();
                break;
            case 3:
                suma = sumaFuncion(a, b);
                printf("La suma de %.1f + %.1f, da como resultado : %.1f\n", a, b, suma);
                break;
            case 4:
                resta = restaFuncion(a, b);
                printf("La resta de %.1f - %.1f, da como resultado : %.1f\n", a, b, resta);
                break;
            case 5:
                validacionDivision(a, b);
                break;
            case 6:
                multi = multiFuncion(a, b);
                printf("La multiplicacion de %1.f * %.1f, da como resultado : %.1f\n", a, b, multi);
                break;
            case 7:
                factorial = factorialFuncion(a);
                printf("El factorial de %.1f es : %.1f\n", a, factorial);
                break;
            case 8:
                calcularTodo(a, b);
                break;
            case 9:
                seguir = 'n';
                break;
        }
    }

    return 0;
}
