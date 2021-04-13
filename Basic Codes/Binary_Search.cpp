#include <iostream>
using namespace std;

int binarysearch(int arr[],int n,int key){
    int s=0;
    int e=n;
    while(s<=e){
        int mid=(s+e)/2;
        if (arr[mid]==key){
            return mid;
        }
        else if (mid>key){
            e = mid-1;
        }
        else if (mid<key){
            s = mid+1;
        }
        else {return -1;}
    }
}

int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int arr[n];
    for (int i=1; i<=n; i++){
        cin>>arr[i];
        }

    int key;
    cout<<"Enter the element whose position you want to find: "<<endl;
    cin>>key;

    cout<<binarysearch(arr,n,key)<<endl;    

    return 0;
}