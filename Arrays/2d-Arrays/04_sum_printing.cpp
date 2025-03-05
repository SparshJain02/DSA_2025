#include<iostream>
using namespace std;
void sumPrintRow(int arr[][3],int row, int col){
    for(int i=0; i<row; i++){
        int sum = 0;
        for(int j=0; j<col; j++){
            sum+=arr[i][j];
        }
        cout<<"Sum of "<<i<<" row is: "<<sum<<endl;
    }

}
void sumPrintCol(int arr[][3],int row, int col){
    for(int i=0; i<col; i++){
        int sum = 0;
        for(int j=0; j<row; j++){
            sum+=arr[j][i];
        }
        cout<<"Sum of "<<i<<" row is: "<<sum<<endl;
    }

}
void sumPrintDaigonal(int arr[][3],int row, int col){
    int sum = 0;
    for(int i=0; i<row; i++){
        sum+=arr[i][i];
    }
    cout<<"Sum daignoaly: "<<sum<<endl;

}
void sumPrintDaigonalReverse(int arr[][3], int row, int col){
    int sum = 0;
    for(int i=row-1;i>=0; i--){
        sum+=arr[i][i];
    }
    cout<<"Sum is: "<<sum<<endl;
}
int main(){
    int arr[][3] = {
        {10,20,30},
        {40,50,60},
        {70,80,90}
    };
    int row = 3;
    int col = 3;
    cout<<"Printing sum row wise"<<endl;
    sumPrintRow(arr,row,col);
    cout<<"Printing sum col wise"<<endl;
    sumPrintCol(arr,row,col);
    cout<<"Printing sum daigonal wise"<<endl;
    sumPrintDaigonal(arr,row,col);
    cout<<"Printing sum daignoal reversely "<<endl;
    sumPrintDaigonalReverse(arr,row,col);
}