#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int** a, const int n, const int k, const int Low, const int High);
void Print(int** a, const int n, const int k);
int countMultiply(int** a, const int n, const int k);


int main()
{
	srand((unsigned)time(NULL));
	int Low;
	int High;
	cout << "Low = "; cin >> Low;
	cout << "High = "; cin >> High;
	int n;
	int k;
	cout << "n = "; cin >> n;
	cout << "k = "; cin >> k;
	int** a = new int* [n];
	for (int i = 0; i < n; i++)
		a[i] = new int[k];
	Create(a, n, k, Low, High);
	Print(a, n, k);

    cout
        << "Multiply: "<< countMultiply(a, n, k)<< endl;

  


	for (int i = 0; i < n; i++)
		delete[] a[i];
	delete[] a;
	return 0;
}
void Create(int** a, const int n, const int k, const int Low, const int High)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < k; j++)
			a[i][j] = Low + rand() % (High - Low + 1);
}
void Print(int** a, const int n, const int k)
{
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
			cout << setw(4) << a[i][j];
		cout << endl;
	}
	cout << endl;
}
int countMultiply(int ** a, const int n, const int k) {
	int dob= 1;
	int check=0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		
			if (a[i][j] >=0)
			
				check += 1;

		if (check == k)
			for (int j = 0; j < k; j++)
				dob *= a[i][j];
		check = 0;
	}
	return dob;
}
 


