#include <iostream>
using namespace std;

int Linear_Search(int *arr, int n, int target);

int main(){

    int size=0, *Arr=nullptr;
    cout<<"Enter Array Size: ";
    cin>>size;

    Arr=new int[size];      //Allocating and inputting Array
    for(int i=0; i<size; ++i)
        cin>>Arr[i];
    
    int Search=0;
    cout<<"Enter Seraching Number: ";
    cin>>Search;

    int status=Linear_Search(Arr,size,Search);
    if(status>-1)
        cout<<"The index of "<<Search<<" is : "<<status<<endl;
    else
        cout<<Search<<" does not exist in Array!!"<<endl;

    delete[] Arr;
    Arr=nullptr;

    return 0;
}

int Linear_Search(int *arr, int n, int target){

    for(int i=0; i<n; ++i){
        if(arr[i]==target)
            return i;
    }
    return -1;
}