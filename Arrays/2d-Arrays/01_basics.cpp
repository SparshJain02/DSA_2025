#include<iostream>
using namespace std;
void print(int row, int col , int arr[][3]){
    for(int i=0;i<row; i++){
        for(int j = 0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main(){
    int arr[2][3]; // normal initialization

    int brr[][3] = {
        {10,20,30},
        {40,50,60},
        {70,80,90}
    };
    int row = 3;
    int col = 3;
    print(row,col,brr);
    // int crr[][]; // error column is necessary
    // int brr[][3] // error because we didn't assigned any values 

    // 2-d arrays are not stored in the form of matrix in backend they are stored in 1-d array type , to convert them from 2-d array to 1-d array formula: c*i+j (where c is column , i is number of rows , j is number of columns )
    // that's why column entry is must
}