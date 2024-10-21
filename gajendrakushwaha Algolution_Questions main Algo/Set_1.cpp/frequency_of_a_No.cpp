#include <iostream>
using namespace std;

int findFreq(int arr[], int len, int target)
{
	int frq = 0;

	for (int i = 0; i < len; ++i)
	{
		if (arr[i] == target)
		{
			frq++;
		}
	}

	return frq;
}

int main()
{
	int arr[] = { 2, 4, 5, 2, 6, 7, 2, 8, 2, 2, 2 };

	int target = 2;
	int len = sizeof(arr) / sizeof(arr[0]);

	int freq = findFreq(arr, len, target);

	cout << "The frequency of " << target << " is: " << freq << endl;

	return 0;
}