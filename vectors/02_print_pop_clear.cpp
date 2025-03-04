#include<iostream>
using namespace std;
#include<vector>

void print(vector<int>&v){
    int size = v.size(); 
    for(int i=0; i<size; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>v; 
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    cout<<"Elements after pushing: "<<endl;
    print(v);
    cout<<"Element at 0idx : "<<endl;
    cout<<v.at(0); // similar v[0]
    cout<<endl;
    cout<<"Popped last element: "<<endl;
    v.pop_back(); // deletes element from back
    print(v);
    cout<<"Cleared entire vector: "<<endl;
    v.clear(); // deletes all the elements
    
    
    
}