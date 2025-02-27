#include<iostream>
using namespace std;



int main(){
    // Reference Variables 
    int n = 5;
    int &k = n;
    cout<<"n: "<<n<<endl;
    cout<<"k: "<<k<<endl;
    n++,k++,k--; // 6 
    cout<<"n: "<<n<<endl;
    cout<<"k: "<<k<<endl;
}