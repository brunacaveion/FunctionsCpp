#include "Matematica.h"
#include <cmath>

// Definição das funções

int Soma(int num1, int num2)
{
	return num1+num2;
}

int Sub(int num1, int num2)
{
	return num1 - num2;
}

int Mul(int num1, int num2)
{
	return num1 * num2;
}

float Div(int num1, int num2)
{
	// esta fazendo divisão inteira mas podemos fazer cast (uma conversão)
	// quando colocamos (float) deixa de ser inteiro e passa a ser float
	return (float)num1 / (float)num2;
}

double Pow(int num1, int num2)
{
	return pow(num1, num2);
}

float root(int num)
{
	return sqrt(num);
}
