#include <iostream>
using namespace std;



int power(int x, unsigned int y)
{
	int temp;
	if (y == 0)
		return 1;
	temp = power(x, y / 2);
	if (y % 2 == 0)
		return temp * temp;
	else
		return x * temp * temp;
}


int main()
{
	int x = 6;
	int y = 5;
	// int x = -3;
	// int y = 6;

	cout << power(x, y);
	return 0;
}

