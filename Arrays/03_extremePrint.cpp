#include<iostream>
using namespace std;

void print(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void extremePrint(int arr[], int size){
    int left = 0; 
    int right = size - 1;
    int brr[size];
    int i= 0;
    while(left<=right){
        if(left == right){
            brr[i] = arr[left];
            left++;
        }
        else{
            brr[i] = arr[left];
            i++,left++;
            brr[i] = arr[right];
            right--,i++;
        }
    }
    print(brr,size);
}
int main(){
    int arr[6] = {10,20,30,40,50};
    extremePrint(arr,5);

}