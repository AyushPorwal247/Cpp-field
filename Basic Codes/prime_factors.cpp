#include<iostream>
using namespace std;

int main(){
    int n,x;
    cin>>n;
    cout<<"Prime factors are :"<<endl;
    for (x=1; x<=n; x++){
        if (n % x == 0){
            cout<<x<<",";
        }else{
            continue;
        }
    }
    return 0;
}