#include <iostream>
using namespace std;

int main(){
    int C;
    cout<<"Enter the capacity of the tank: "; cin>>C;

    int ltr;
    cout<<"Enter the water to be added each day: "; cin>>ltr;

    int i=0, tank=C;

    while(tank>0){
        i++;

        tank = tank - i + ltr;

        if(tank>C)
            tank = C;
    }
    cout<<"The tank was empty after "<<i<<" days."<<endl;
}