#include <iostream>
using namespace std;

void Bubble_Sort(int *arr, int n);

int main(){

    int size=0, *Arr=nullptr;
    cout<<"Enter Array Size: ";
    cin>>size;

    Arr=new int[size];      //Allocating and inputting Array
    for(int i=0; i<size; ++i)
        cin>>Arr[i];

    cout<<"Original Array: ";
    for(int i=0; i<size; ++i)
        cout<<Arr[i]<<" ";
    cout<<endl;

    Bubble_Sort(Arr,size);      //calling sorting function

    cout<<"Sorted Array: ";
    for(int i=0; i<size; ++i)
        cout<<Arr[i]<<" ";
    cout<<endl;

    return 0;
}

void Bubble_Sort(int *arr, int n){

    for(int i=0; i<n; ++i){
        for(int j=0; j<n-1; ++j){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}