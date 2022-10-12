#include <iostream>
using namespace std;

int kthSmallest(int a[], int n, int k);
int kthLargest(int a[], int n, int k);

int main(){
    int n;
    cout<<"Enter the number of elements: "; cin>>n;
    int a[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++)
        cin>>a[i];
    int k;
    cout<<"Enter k: "; cin>>k;

    

    cout<<"The "<<k<<"th largest number is "<<kthLargest(a, n, k)<<endl;
    cout<<"The "<<k<<"th smallest number is "<<kthSmallest(a, n, k)<<endl;
}

int kthSmallest(int a[], int n, int k){
    int j = n-1, count =0;

    while(count!=k){
        int min = 0;
        for(int i=1; i<=j; i++){
            if(a[i]<a[min])
                min = i;
        }

        if(j!=min){
            int temp = a[j];
            a[j] = a[min];
            a[min] = temp;
        }

        if(j==n-1)
            count++;
        else if(a[j]>a[j+1])
            count++;

        j--;
    }
    return a[j+1];
}

int kthLargest(int a[], int n, int k){
    int j = n-1, count =0;

    while(count!=k){
        int max = 0;
        for(int i=1; i<=j; i++){
            if(a[i]>a[max])
                max = i;
        }

        if(j!=max){
            int temp = a[j];
            a[j] = a[max];
            a[max] = temp;
        }

        if(j==n-1)
            count++;
        else if(a[j]<a[j+1])
            count++;

        j--;
    }
    return a[j+1];
}