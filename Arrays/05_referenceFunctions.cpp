#include<iostream>
using namespace std;

void  incrementBy1(int n){
     n++;
}
void incrementBy1Reference(int &n){
    n++;
}
int main(){
    int n = 5;
    incrementBy1(n);
    cout<<"n: "<<n<<endl; // 5 no change

    incrementBy1Reference(n); // 6 value changed
    cout<<"n: "<<n<<endl;

}