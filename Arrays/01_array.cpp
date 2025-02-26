#include<iostream>
using namespace std;

void problemStatement(int arr[], int n){
    // taking input
    for(int i=0; i<n; i++){
        cout<<"arr["<<i<<"]: ";
        cin>>arr[i];
    }

    // doubling up each value of that array
    for(int i=0; i<n; i++){
        arr[i]*=2;
    }
}

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[5];
    for(int i=0; i<5; i++){
        cout<<"Enter the element at arr["<<i<<"]: ";
        cin>>arr[i];
    }
    print(arr,5);

    int n = 10;
    int brr[n];
    problemStatement(brr,n);
    print(brr,n);
}