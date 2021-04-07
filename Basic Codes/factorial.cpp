#include <iostream>
using namespace std;

int factorial(int num){
    int fac=1;
    for(int i=1; i<=num; i++){
        fac*= i;
    }
    return fac;
}

int main(){
    int n,x;
    cout<<"Enter number:"<<endl;
    cin>>n;
    x = factorial(n);
    cout<<x<<endl;
    return 0;
}