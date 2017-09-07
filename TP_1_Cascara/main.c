#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    int operando1;
    int operando2;
    int resultadoSuma;
    int resultadoResta;
    int resultadoMultiplicacion;
    int resultadoDivision;
    int resultadoFactorial;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                tomaOperandos("Ingrese el primer operando\n", &operando1);
                break;
            case 2:
                tomaOperandos("Ingrese el segundo operando\n", &operando2);
                break;
            case 3:
                if((funcionSuma(operando1,operando2,&resultadoSuma)) != -1)
                {
                    printf("EL RESULTADO DE LA SUMA ES= %d\n",resultadoSuma);
                }
                else
                {
                    printf("ERROR\n");
                }
                break;
            case 4:
                if((funcionResta(operando1,operando2,&resultadoResta))!=-1)
                   {
                       printf("EL RESULTADO DE LA RESTA ES= %d\n", resultadoResta);
                   }
                   else
                    {
                        printf("ERROR\n");
                    }
                    break;
            case 5:
                if((funcionDivision(operando1,operando2,&resultadoDivision))!=-1)
                   {
                       printf("EL RESULTADO DE LA DIVISION ES= %d\n",resultadoDivision);
                   }
                   else
                    {
                        printf("ERROR\n");
                    }
                break;
            case 6:
                if((funcionMultiplicacion(operando1,operando2,&resultadoMultiplicacion))!=-1)
                {
                    printf("EL RESULTADO DE LA MULTIPLICACION= %d\n", resultadoMultiplicacion);
                }
                else
                {
                    printf("ERROR\n");
                }
                break;
            case 7:
                if(factorial(operando1,&resultadoFactorial) != -1)
                {
                    printf("EL RESULTADO DEL FACTORIAL ES= %d\n",resultadoFactorial);
                }
                else
                {
                    printf("ERROR\n");
                }
                break;
            case 8:
                if(operando1!=NULL & operando2!=NULL)
                {
                    funcionSuma(operando1,operando2,&resultadoSuma);
                    funcionResta(operando1,operando2,&resultadoResta);
                    funcionDivision(operando1,operando2,&resultadoDivision);
                    funcionMultiplicacion(operando1,operando2,&resultadoMultiplicacion);
                    factorial(operando1,&resultadoFactorial);

                    printf("LOS RESULTADOS DE LAS OPERACIONES SON:\n SUMA=%d \t RESTA=%d \t DIVISION=%d \n MULTIPLICACION=%d \t FACTORIAL=%d\n", resultadoSuma, resultadoResta, resultadoDivision, resultadoMultiplicacion, resultadoFactorial);
                }
                break;
            case 9:
                seguir = 'n';
                break;
        }
    }

    return 0;

}
