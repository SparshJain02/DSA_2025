#include<iostream>
using namespace std;



int main(){
    int arr[] = {23,-7,12,-10,11,-40,60};
    int n = 7;
    int j = 0;
    // inserting negative elements at left pos, and postive el and right pos
    for(int i=0; i<n; i++){
        if(arr[i]<0){
            swap(arr[i],arr[j]);
            j++;
        }
    }

    // printing 
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}