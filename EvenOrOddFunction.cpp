// Get a number from the user and decide if it is even or odd
#include <iostream>

bool isPar(int num);

int main()
{
	int Numero;
	std::cout << "Write an integer number: ";
	std::cin >> Numero;
	if (isPar(Numero) == true)
	{
		std::cout << "\nThe number " << Numero << " is even\n";
	}
	else if (isPar(Numero) == false)
	{
		std::cout << "\nThe number " << Numero << " is odd\n";

	}
	system("PAUSE");
	return 0;
}

bool isPar(int num)
{
	if (num % 2 == 0)
		return true;
	else
		return false;
}