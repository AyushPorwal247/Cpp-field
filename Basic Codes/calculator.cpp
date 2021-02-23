#include<iostream>
using namespace std;

int main(){
    float a,b;
    cout<<"Input 2 numbers:"<<endl;
    cin>>a>>b;
    cout<<"Input an Operator:"<<endl;
    char op;
    cin>>op;
    switch(op){
        case '+':
        cout<<a+b<<endl;
        break;
        case '-':
        cout<<a-b<<endl;
        break;
        case '*':
        cout<<a*b<<endl;
        break;
        case '/':
        cout<<a/b<<endl;
        break;
        default:
        cout<<"Invalid operator"<<endl;}
        return 0;}