#include <iostream>

float soma(float num1, float num2); /* We are saying that the function exists and we will declare it later on the code, if we don't do that will get an error to compile*/

int main() // main() ins a function without parameters (on this case)
{
	std::cout << soma(100, 500) << "\n";
	system("PAUSE");
	return 0;
}

float soma(float num1, float num2)
{
	return(num1 + num2);
}