#include<iostream>
using namespace std;
void printPairs(int arr[], int size){
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            // doing this step so that i wont get extra line space after last element 
            if(i==size-1 && j==size-1){
                cout<<arr[i]<<","<<arr[j];
            }
            else{
                cout<<arr[i]<<","<<arr[j]<<endl;
            }
        }
        cout<<endl;
    }
}

int main(){
    int arr[3] = {10,20,30};
    int size = 3;
    printPairs(arr,size);
}