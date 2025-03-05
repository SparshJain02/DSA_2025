#include<iostream>
using namespace std;
#include<limits.h>
int maxEl(int arr[][3],int row, int col){
    int max = INT_MIN;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(max<arr[i][j]){
                max = arr[i][j];
            }
        }
    }
    return max;
}
int minEl(int arr[][3], int row, int col){
    int min = INT_MAX;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(min>arr[i][j]){
                min = arr[i][j];
            }
        }
    }
    return min;
}
int main(){
   int arr[3][3] = {
    {1,2,3},
    {4,5,6},
    {7,8,9}
   };
   int row = 3, col = 3;
   int max = maxEl(arr,row,col);
   int min = minEl(arr,row,col);
    cout<<"max number: "<<max<<" min number: "<<min<<endl;
}