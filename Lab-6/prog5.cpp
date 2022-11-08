#include <stdio.h>
#include <iostream>
#include <cstdlib>
using namespace std;

int stopping_station(int, int);
int stopping_station(int p, int n)
{

	int num = 1, dem = 1, s = p;
	while (p != 1) {

		dem *= p;
		p--;
	}

	int t = n - s + 1;
	while (t != (n - 2 * s + 1)) {

		num *= t;
		t--;
	}

	if ((n - s + 1) >= s)
		printf("%d", num / dem);

	else
		printf("not possible");
}
int main()
{
	int n, s;
	cout<<"Between the stations 12 to 7: ";
	stopping_station(12,7);
	cout<<" \n";
	cout<<"Between the stations 4 to 12: ";
	stopping_station(4,12);
	cout<<" \n";
}

