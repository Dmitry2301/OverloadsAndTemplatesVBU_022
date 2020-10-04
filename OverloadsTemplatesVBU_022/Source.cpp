#include<iostream>
using namespace std;

template <typename T>
void FillRand(T arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (100-50)/0.12;
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

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	
	const int m = 10;
	double brr[m];
	FillRand(brr, m);
	Print(brr, m);

	char crr[m];
	FillRand(crr, m);
	Print(crr, m);

}
