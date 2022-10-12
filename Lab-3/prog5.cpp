#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n, int i = 2)
{
    if (n <= 2)
        return (n == 2) ? true : false;
    if (n % i == 0)
        return false;
    if (i * i > n)
        return true;

    return isPrime(n, i + 1);
}

int main()
{
	cout<<"Enter the lower limit and upper limit: ";
    int ll, ul; cin>>ll>>ul;

    cout<<"The prime numbers between the givn limits are:"<<endl;
	for(int i=ll; i<ul; i++){
        if(isPrime(i))
            cout<<i<<" ";
    }

	return 0;
}
