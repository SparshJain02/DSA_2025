#include<iostream>
using namespace std;
int uniqueElement(int arr[], int size){
    int ans = 0;
    for(int i=0; i<size; i++){
        ans = ans^arr[i];
    }
    return ans;
}
int main(){
    int arr[] = {10,10,20,30,30,40,50,40,50};
    int size = sizeof(arr)/sizeof(int);
    int uniqueEl = uniqueElement(arr,size);
    cout<<uniqueEl<<endl;
}