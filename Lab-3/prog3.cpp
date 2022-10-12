#include <bits/stdc++.h>
using namespace std;

int c = 0;
void towerOfHanoi(int n, char from_rod, char to_rod,char aux_rod)
{
    if (n == 0)
    {
        return;
    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    cout << "Move disk " << n << " from rod " << from_rod<< " to rod " << to_rod << endl;
    c++;
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main()
{
    cout<<"Enter the number of disk: ";
    int N; cin >> N;

    towerOfHanoi(N, 'A', 'C', 'B');
    cout << c << " steps";
    return 0;
}