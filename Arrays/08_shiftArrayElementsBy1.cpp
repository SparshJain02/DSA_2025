#include<iostream>
using namespace std;

void shiftArrayElementsBy1(int arr[], int size){
    int temp = arr[0];
    int next = 0;
    int i =1;
    while(i<size){
        next = arr[i];
        arr[i] = temp;
        temp = next;
        i++;
    }
    arr[0] = temp;
}
void shiftByBabbar(int arr[], int size){
    int temp = arr[size-1];
    int i = size - 1;
    while(i>0){
        arr[i] = arr[i-1];
        i--;
    }
    arr[0] = temp;
}
void print(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[] = {10,20,30,40,50,60};
    int size = 6;
    shiftByBabbar(arr,size);
    print(arr,size);
}