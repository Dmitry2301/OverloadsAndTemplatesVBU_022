#include"Header.h"
#include"Source1.cpp"

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
