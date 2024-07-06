#include <iostream>
#include <climits>

int main()
{
	using namespace std;
	int Numbers[10]; // The array was set with ten variables but this code works with bigger arrays.
	int Largest{ 0 };
	int Smallest{ INT_MAX }; // It's necessary to set the maximum value for this variable otherwise it wouldn't be replaced by the right value.

	for (int i = 0; i < 10; i++)
	{
		cout << "Type number " << (i + 1) << " : ";
		cin >> Numbers[i];
		if (Numbers[i] < Smallest)
			Smallest = Numbers[i];
		if (Numbers[i] > Largest)
			Largest = Numbers[i];
	}

	cout << "The smallest number is " << Smallest << " and the largest is " << Largest;
}