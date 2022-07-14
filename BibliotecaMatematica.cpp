// C�digo principal

/* Esse c�digo cria uma biblioteca de matem�tica feita pelo programador ao inves de usar uma pronta*/
#include <iostream>
#include "Matematica.h"

int NumeroGlobal = 5; /* tudo declarado fora de fun��o � algo global, que posso usar essa vari�vel global em QUALQUER parte do c�digo, incluindo no outro .cpp. se colocar dentro do colchetes de alguma fun��o j� n�o posso mais usar fora da fun��o, n�o � global.*/

int main()
{
	int numero1, numero2;

	std::cout << "\nWrite the first number: ";
	std::cin >> numero1;
	std::cout << "\nWrite the second number: ";
	std::cin >> numero2;
	std::cout << "\nOperations results: \n";
	std::cout << "\nSum: " << Soma(numero1, numero2);
	std::cout << "\nSubtraction: " << Sub(numero1, numero2);
	std::cout << "\nMultiplication: " << Mul(numero1, numero2);
	std::cout << "\nDivision: " << Div(numero1, numero2);
	std::cout << "\nPower: " << Pow(numero1, numero2);
	std::cout << "\nSquare root first number: " << root(numero1);
	std::cout << "\nSquare root secon number: " << root(numero2)<<"\n";
	system("PAUSE");
	return 0; 
}