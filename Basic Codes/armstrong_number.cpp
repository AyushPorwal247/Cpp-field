#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n,x,lastdigit;
    cout<<"Enter number:"<<endl;
    cin>>n;
    int originaln = n;
    while(n>0){
        lastdigit = n%10;
        x = x + pow(lastdigit,3);
        n = n/10;}
    if (x==originaln){
        cout<<originaln<<" is an armstrong number."<<endl;}
    else {cout<<originaln<<" is not an armstrong number."<<endl;}
return 0;}