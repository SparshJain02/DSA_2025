#include<iostream>
using namespace std;
#include<vector>
void creating2dVector(vector<vector<int>>&arr){
    int row;
    cout<<"Enter the size of row: ";
    cin>>row;
    for(int i=0;i<row; i++){
        int col; 
        cout<<"Enter the size of col for "<<i<<" row: ";
        cin>>col;
        vector<int>temp;
        for(int j=0; j<col; j++){
            int data;
            cout<<"Enter the data: ";
            cin>>data;
            temp.push_back(data);
        }
        arr.push_back(temp);
    }

}
void print(vector<vector<int>>&arr){
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[i].size(); j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    vector<vector<int>>v;
    // in 2d vector each row has it's own vector
    creating2dVector(v); 
    cout<<"Created 2d vector successfully"<<endl;

    cout<<"Printing 2d vector"<<endl;
    print(v);
}