#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x;
    cout<<"Enter the element to be searched: ";
    cin>>x;
    int low=0,high=n-1,mid;
    bool found=false;   
    while(low<=high){
        mid=low+(high-low)/2;
        if(arr[mid]==x){
            found=true;
            break;
        }
        else if(arr[mid]<x){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if(found){
        cout<<"Element found at index: "<<mid<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
}
