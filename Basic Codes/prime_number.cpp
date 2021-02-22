#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int x=2; x<n; x++){
        if (n%x==0){
            cout<<"The given number is not a prime number"<<endl;
            break;
        }else {
            cout<<"The given number is a prime number"<<endl;
            break;}
    }
    return 0;
}