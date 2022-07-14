// Código principal

/* Esse código cria uma biblioteca de matemática feita pelo programador ao inves de usar uma pronta*/
#include <iostream>
#include "Matematica.h"

int NumeroGlobal = 5; /* tudo declarado fora de função é algo global, que posso usar essa variável global em QUALQUER parte do código, incluindo no outro .cpp. se colocar dentro do colchetes de alguma função já não posso mais usar fora da função, não é global.*/

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