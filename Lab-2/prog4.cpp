#include <iostream>
using namespace std;

int binarySearch(int a[], int ll, int ul, int key){

    if(ll>ul){
        return -1;
    }
    int n = ul-ll +1;

    int mid = (ul+ll)/2;

    if (a[mid]== key){
        return mid;
    }
    else if (a[mid]<key){
        return (binarySearch(a,mid+1,ul,key));
    }
    else {
        return(binarySearch(a, ll,mid-1, key));
    }
}

int main(){

    cout<<"Enter the numeber of elements: ";
    int n; cin>>n;

    int a[n];
    cout<<"Enter the elements of the array: "<<endl;
    for (int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<"Enter the key to search: ";
    int key;
    cin>>key;

    int c = binarySearch(a,0,n-1,key);
    if(c!=-1){
        cout<<"The key was found at "<<c+1<<"th position."<<endl;
    }
    else {
        cout<<"Key was not found"<<endl;
    }

    return 0;
}