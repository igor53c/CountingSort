// CountingSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

vector<int> countingSort(vector<int>);

int main()
{
	vector<int> vect{ 1, 1, 3, 2, 1 };

	vector<int> result = countingSort(vect);

	for (int i = 0; i < result.size() ; i++)
	{
		cout << result[i];
	}

	return EXIT_SUCCESS;
}

vector<int> countingSort(vector<int> arr) {

	vector<int> retValue;

	retValue.reserve(100);

	for (int i = 0; i < 100; i++)
		retValue.push_back(0);


	for (int i : arr)
		retValue[i]++;


	for (int i = 99; i >= 0; i--)
	{
		if (retValue[i] == 0)
			retValue.pop_back();
		else break;
	}

	return retValue;
}
