// a program that sums, substracts, multiplies and divides 2 given numbers
# include <iostream>

float sum(float num1, float num2);
float sub(float num1, float num2);
float mul(float num1, float num2);
float div(float num1, float num2);

int main()
{
	float Num1, Num2;
	std::cout << "\nWrite the first number: "<<"\n";
	std::cin >> Num1;
	std::cout << "\nWrite the second number: "<<"\n";
	std::cin >> Num2;
	std::cout << "\n******* The operations results are: *******\n";
	std::cout << "Sum: " << sum(Num1, Num2)<<"\n";
	std::cout << "Subtraction: " << sub(Num1, Num2) << "\n";
	std::cout << "Multiplication: " << mul(Num1, Num2) << "\n";
	std::cout << "Division: " << div(Num1, Num2) << "\n";
	system("PAUSE");
	return 0;
}

float sum(float num1, float num2)
{
	return(num1 + num2);
}
float sub(float num1, float num2)
{
	return(num1 - num2);
}
float mul(float num1, float num2)
{
	return(num1 * num2);
}
float div(float num1, float num2)
{
	return(num1 / num2);
}
