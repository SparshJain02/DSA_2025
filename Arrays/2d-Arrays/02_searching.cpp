#include<iostream>
using namespace std;

bool search(int arr[][3], int row, int col, int target){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[j][i] == target){ // searching col wise
                return true;
            }
        }
    }
    return false;
}
int main(){
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    // if(search(arr,3,3,5)){
    //     cout<<"Target found"<<endl;
    // }
    // else cout<<"Target not found"<<endl;

    search(arr,3,3,3)?cout<<"Target found"<<endl:cout<<"Target not found"<<endl;
    return 0;
}