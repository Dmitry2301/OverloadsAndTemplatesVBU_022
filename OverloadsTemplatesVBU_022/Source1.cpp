#include"Header.h"

template <typename T>
void FillRand(T arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (100 - 50) / 0.12;
	}
}
template <typename T>
void Print(T arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}
	cout << endl;
}