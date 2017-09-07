#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

int validaNumero(char* buffer);
int tomaOperandos(char* mensaje, int* operando);
int funcionSuma(int operando1, int operando2, int* resultadoSuma);
int funcionResta(int operando1, int operando2, int* resultadoResta);
int funcionDivision(int operando1, int operando2, int* resultadoDivision);
int funcionMultiplicacion(int operando1, int operando2, int* resultadoMultiplicacion);
int factorial(int operando, int* resultadoFactorial);
#endif // FUNCIONES_H_INCLUDED
