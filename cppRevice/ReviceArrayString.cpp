#include <iostream>
using namespace std;

int main()
{
	// Array is a collection of similar data type(must be same)

	float arrFloat[5] = {0};
	double arrDouble[5] = {0};
	char arrChar[5] = {'a', 'b', 'c', 'd', 'e'};
	int arr[5] = {0};

	// whatever data type you give it should be same for all the value.

	// above method will set the first element to 0 and rest will be set to 0;

	// for printing the array
	/*for (int i = 0; i < 5; i++)
		cout << arr[i] << endl;
	}*/

	// Basics method to take input and print the array.
	/* for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}
	cout << "The array is: " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << "-";
	} */

	// First element of the array is stored in the any location in the memory(ram) which we can't know,
	// but we surly know the next element is stored at next to it (with the size of the data type).

	// 2D array.
	// 2 times of 3 element array.(In laymen terms)
	int arr2D[2][3] = {{1, 2, 3}, {4, 5, 6}};

	return 0;
}