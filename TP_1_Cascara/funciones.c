#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <string.h>
#define LF 10

/** \brief
 *
 * \param
 * \param
 * \return
 *
 */

int validaNumero(char* buffer)
{
    int retorno=0;
    int i=0;

    while(buffer[i]!='\0')
    {
        if((buffer[i]<'0' || buffer[i]>'9')&& buffer[i] != LF )
        {
            retorno=-1;
            break;
        }
        i++;
    }
    return retorno;

}

/** \brief
 *
 * \param
 * \param
 * \return
 *
 */

int tomaOperandos(char* mensaje, int* operando)
 {
     char buffer[4096];
     int retorno=-1;

     printf(mensaje);
     fflush(stdin);
     fgets(buffer,4096,stdin);
     buffer[4094] = LF ;
     buffer[4095] = '\0';
     if((validaNumero(buffer))!=-1)
     {
         *operando=atoi(buffer);
         retorno=0;
     }

     return retorno;
 }

 /** \brief
  *
  * \param
  * \param
  * \return
  *
  */

int funcionSuma(int operando1, int operando2, int* resultadoSuma)
{
     int retorno=-1;

     if(operando1!=NULL && operando2!=NULL && resultadoSuma!=NULL)
     {
         *resultadoSuma=operando1+operando2;
         retorno=0;
     }

     return retorno;
}

  /** \brief
   *
   * \param
   * \param
   * \return
   *
   */

int funcionResta(int operando1, int operando2, int* resultadoResta)
{
     int retorno=-1;

     if(operando1!=NULL && operando2!=NULL && resultadoResta!=NULL)
     {
         if(operando1>operando2 || operando1==operando2)
         {
            *resultadoResta=operando1-operando2;
            retorno=0;
         }
     }

     return retorno;
}

/** \brief
 *
 * \param
 * \param
 * \return
 *
 */
int funcionDivision(int operando1, int operando2, int* resultadoDivision)
{
     int retorno=-1;

     if(operando1!=NULL && operando2!=NULL && resultadoDivision!=NULL)
     {
         if(operando2!=0)
         {
            *resultadoDivision=operando1/operando2;
            retorno=0;
         }
         else
         {
             printf("NO SE PUEDE DIVIDIR POR 0\n");
         }
     }

     return retorno;
}


/** \brief
 *
 * \param
 * \param
 * \return
 *
 */

 int funcionMultiplicacion(int operando1, int operando2, int* resultadoMultiplicacion)
{
     int retorno=-1;

     if(operando1!=NULL && operando2!=NULL && resultadoMultiplicacion!=NULL)
     {
         *resultadoMultiplicacion=operando1*operando2;
         retorno=0;
     }

     return retorno;
}

/** \brief
 *
 * \param
 * \param
 * \return
 *
 */

int factorial(int operando, int* resultadoFactorial) //PREGUNTAR HOY
{
    int retorno=0;
    int AUXresultadoFactorial;
    int i;
    if(operando!=NULL && resultadoFactorial!=NULL)
    {
        if(operando==1)
        {
            *resultadoFactorial=1;
        }
        else
        {
            for(i=1;i<operando;i++)
            {
                AUXresultadoFactorial=operando*i;
                AUXresultadoFactorial=AUXresultadoFactorial+AUXresultadoFactorial;
                printf("%d\n", i);
            }
            *resultadoFactorial=AUXresultadoFactorial;
        }
    }
    else
    {
        retorno=-1;
    }

    return retorno;
}
