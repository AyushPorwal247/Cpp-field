#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements:"<<endl;
    for (int i=1; i<=n; i++){
        cin>>arr[i];}
    
    for(int i=1; i<n-1; i++){
        for (int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;}}}
    for(int i=1; i<n; i++){
        cout<<arr[i]<<" ";
    }
       

    return 0;
}