#include <iostream>

using namespace std;

void segregate(int arr[], int n)
{

    // Count negative numbers

    int count_negative = 0;

    for (int i = 0; i < n; i++)

        if (arr[i] < 0)

            count_negative++;

    // Run a loop until all negative

    // numbers are moved to the beginning

    int i = 0, j = i + 1;

    while (i != count_negative)
    {

        // If number is negative, update

        // position of next positive number.

        if (arr[i] < 0)
        {

            i++;

            j = i + 1;
        }

        // If number is positive, move it to

        // index j and increment j.

        else if (arr[i] > 0 && j < n)
        {

            swap(arr[i], arr[j]);

            j++;
        }
    }
}

int main()
{

    int count_negative = 0;

    int arr[] = {14, 17, -22, -3, 4, 6, -5};

    int n = sizeof(arr) / sizeof(arr[0]);

    segregate(arr, n);

    for (int i = 0; i < n; i++)

        cout << arr[i] << " ";
}