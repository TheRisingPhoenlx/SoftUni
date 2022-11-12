#include <iostream>

int main()
{
	int number;
	std::cin >> number;

	double bonus;
	double total_number;

	if (number <= 100)
	{
		bonus = 5;
	}
	else if (number <= 1000)
	{
		bonus = number * 0.2;
	}
	else if (number > 1000)
	{
		bonus = number * 0.1;
	}

	double total_bonus;

	if (number % 2 == 0)
	{
		total_bonus = bonus + 1;
	}
	else if (number % 10 == 5)
	{
		total_bonus = bonus + 2;
	}
	else
	{
		total_bonus = bonus;
	}
	total_number = number + total_bonus;
	std::cout << total_bonus << '\n';
	std::cout << total_number; "\n";


	return 0;
}
