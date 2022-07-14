/* Introduction to functions: a function that sums two given numbers, a void function exemple and using function inside other function*/
#include <iostream>

int SumOfNumber(int Numero, int NumeroASerSomado)
{
	return Numero + NumeroASerSomado;
}

void Mensagem() // it does not return anything, it is an empty function
{
	std::cout << "\nA message from Floripa... It is a sunny day! \n";
// If I add a return here the next part of the function will never be called
	std::cout << "\nA message from Floripa... It is not a raining day! \n";
return; // It ends the function
}

int main()
{
	int Numero, NumeroASerSomado, RetornoDaFuncao;
	Mensagem();
	std::cout << "\nWrite an integer number: " << "\n";
	std::cin >> Numero;
	std::cout << "Write the number to be summed: " << "\n";
	std::cin >> NumeroASerSomado;
	std::cout << "The sum of " << Numero << " with the number " << NumeroASerSomado << " is: " << SumOfNumber(Numero, NumeroASerSomado);
	std::cout << std::endl;
	//std::cout << "The sum of 201 and -620 is: ";
	RetornoDaFuncao = SumOfNumber(201, -620);
	std::cout << std::endl;
	std::cout << "The sum of the first writen number with 150 and 1400 is: ";
	std::cout<<SumOfNumber(Numero, SumOfNumber(150, 1400));
	std::cout << std::endl;
	std::cout << "\nSum of 201 with -620: " << RetornoDaFuncao;
	std::cout << std::endl;
	system("PAUSE");
	return 0;
}