#include <iostream>
#include <climits>

int main()
{
	using namespace std;
	int ArraySize; // This variable sets the maximum size of the array
	int Numbers[20]; // The array was set with twenty variables but this code also works with bigger arrays, you just need to increase its size.
	int Largest{ INT_MIN }; //  It's necessary to set the minimum value for this variable otherwise it wouldn't be replaced by the right value.
	int Smallest{ INT_MAX }; // It's necessary to set the maximum value for this variable otherwise it wouldn't be replaced by the right value.

	// How I set the array size
	cout << "Set the size of the array (Max. 20): ";
	cin >> ArraySize;
	system("CLS");

	// Data input & processing
	for (int i = 0; i < ArraySize; i++)
	{
		cout << "Type number " << (i + 1) << " : ";
		cin >> Numbers[i]; // Data input
		if (Numbers[i] < Smallest) // Processing of the smallest number in the array
			Smallest = Numbers[i];
		if (Numbers[i] > Largest)  // Processing of the largest number in the array
			Largest = Numbers[i];
	}

	// Data output (result)
	cout << "The smallest number is " << Smallest << " and the largest is " << Largest;
}