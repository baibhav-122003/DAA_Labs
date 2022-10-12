#include <iostream>
#include <math.h>
using namespace std;

void integrate(int count);

double f1(double x);

double f2(double x);

double f3(double x);

int main(){
    for(int i=1; i<=3; i++)
        integrate(i);
}

void integrate(int count){
    if(count==1)
        cout<<"Integrating e^x:-"<<endl;
    else if(count==2)
        cout<<"Integrating x^2 + 2*x +3:-"<<endl;
    else
        cout<<"Integrating sin(X):-"<<endl;

    int n;
    cout<<"Enter the number of divisions: "; cin>>n; //Number of divisions.

    int ll, ul;
    cout<<"Enter lower and upper limit respectively: "; cin>>ll>>ul;

    double w = (ul - ll)/(n * 1.0);

    double x = (2*ll + w)/2.0;

    double result = 0;

    if(count==1){
        while(x<ul){
            result += w*f1(x);

            x+=w;
        }
    }
    else if(count==2){
        while(x<ul){
            result += w*f2(x);

            x+=w;
        }
    }
    else{
        while(x<ul){
            result += w*f3(x);

            x+=w;
        }
    }

    cout<<"Integration of f"<<count<<"(x) is "<<result<<endl<<endl;
}

double f1(double x){
    return exp(x);
}

double f2(double x){
    return (x*x + 2*x +3);
}

double f3(double x){
    return sin(x);
}