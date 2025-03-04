#include<iostream>
using namespace std;
#include<vector>


int main(){
    vector<int>v; // created a vector

    // storing 4 elements in vector
    for(int i=0; i<4; i++){
        int data;
        cout<<"v["<<i<<"] = ";
        cin>>data;
        v.push_back(data);
        // printing capacity and size after each input
        cout<<"Capacity: "<<v.capacity()<<endl;
        cout<<"Size: "<<v.size()<<endl;
    }
}