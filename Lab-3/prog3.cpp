#include <iostream>
#include <ctime>
using namespace std;

int getRandom(int x, int y)
{
	srand(time(NULL));
	return (x + rand() % (y-x+1));
}

int randomizedBinarySearch(int arr[], int l,
							int r, int x)
{
	if (r >= l)
	{
		int mid = getRandom(l, r);

		if (arr[mid] == x)
			return mid;

		if (arr[mid] > x)
		return randomizedBinarySearch(arr, l,
									mid-1, x);

		return randomizedBinarySearch(arr, mid+1,
										r, x);
	}

	return -1;
}

int main(void)
{
	int arr[] = {1,2,3,5,7,11,13,17,19};
	int n = sizeof(arr)/ sizeof(arr[0]);
	int x = 3;
	int result = randomizedBinarySearch(arr, 0, n-1, x);
	(result == -1)? printf("not found")
	: printf("position %d", result+1);
	return 0;
}
