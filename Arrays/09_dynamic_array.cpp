#include<iostream>
using namespace std;
void insertEl(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<"arr["<<i<<"] = ";
        cin>>arr[i];
    }
}
void print(int arr[], int n){
    cout<<"Elements are: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int *arr = new int[n]; // created dynamic array
    insertEl(arr,n);
    print(arr,n);

    // can i insert more elements 🤔
    for(int i=n;i<n+2; i++){
        cout<<"arr["<<i<<"] = ";
        cin>>arr[i];
    }
    print(arr,7);

    // what? i am able to insert but this doesn't works in every compiler so if  it's working here i am lucky 😆
}