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
	// 2 times of 3 element array.(In laymen terms)[2 columns and 3 rows]
	// or 2 times array of 3 element.

	int arr2D[2][3] = {{1, 2, 32}, {4, 5, 69}};
	// print above array
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr2D[i][j] << endl;
		}
	}
	cout << "Here comes special number: ";
	// for access the first index is for the
	// we have zero based indexing.
	cout << arr2D[1][2] << endl;
	return 0;
}