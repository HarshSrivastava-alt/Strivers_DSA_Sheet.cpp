#include<iostream>
using namespace std;
int main(){
    int arr[] = {36,15,484,65,59};
    int n =sizeof(arr)/sizeof(arr[0]);
    int k;
    cout<<"Enter the Element that to be searched: ";
    cin>>k; 
    cout<<"Element found at index: ";
    for(int i=0;i<n;i++){
        if(k==arr[i]){
            cout<<i;
        }
    }
}
