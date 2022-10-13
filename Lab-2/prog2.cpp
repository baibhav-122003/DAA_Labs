#include <iostream>
#include <string>

using namespace std;


string reverse(string n){


    int l = n.length();

    if(l==1)
        return n;

    
    return n.at(l-1) + reverse(n.substr(0,l-1));    

}

int main(){

    cout<<"Enter the string: ";
    string n; getline(cin, n);

    cout<<reverse(n);

    return 0;
}