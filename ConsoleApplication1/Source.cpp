#include<iostream>
#include <cstdlib>
#include <math.h>


using namespace std;

int main() {
	int D, a, b, wynik=0;
	int*tab = new int[10];
	cin >> D;

	if (D < 1 || D>10)
	{
		cin >> D;
	}



	for (int i = 0; i < D; i++)
	{
	cin >> a;
		if (a < 1 || a>1000000000)
		{
			cin >> a;
		}

	cin >> b;
		if (b < 1 || b>1000000000)
		{
			cin >> b;
		}
		tab[i]= pow(a, b);
	}

	for (int i = 0; i < D; i++)
	{
		cout << tab[i] % 10 << endl;
	}
	return 0;
}