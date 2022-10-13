#include <iostream>
#include <math.h>

using namespace std;


int reverse(int n){

    if (n/10 == 0)
        return n;
    
    int k=n;
    int c=0;
    while(k!=0){
        c++;
        k/=10;
    }

    return (n%10)*pow(10,c-1) + reverse(n/10);

}

int main(){
    cout<<"Enter the number: ";
    int n; cin>>n;

    cout<<"The reversed number is "<<reverse(n)<<endl;

    return 0;
}