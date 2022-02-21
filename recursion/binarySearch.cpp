#include<iostream>
using namespace std;
void print(int *arr, int s, int e){
    for(int i=s; i<=e; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
bool binarySearch(int *arr, int s, int e, int key){
    cout<<endl;
    print(arr,s,e);
    if(s>e)
        return false;

    int mid = s + (e-s)/2;

    if(arr[mid]==key)
        return true;

    if(arr[mid]>key){
        return binarySearch(arr,s,mid-1,key);
    }
    if(arr[mid]<key){
        return binarySearch(arr,mid+1,e,key); 
    }
}

int main(){
    int arr[5]={1,2,5,7,4};
    int size = 5;
    int s= 0;
    int e = size-1;
    int key = 3;
    bool ans = binarySearch(arr,s,e,key);
    cout<<"present or not "<<ans<<endl;
    print(arr,s,e);
    return 0;
}