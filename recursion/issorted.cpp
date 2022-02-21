#include<iostream>
using namespace std;
bool issorted(int *arr, int size){
    if(size == 0 || size == 1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remainingPart = issorted(arr+1, size-1);
        return remainingPart;
    }

}

int main(){
    int arr[5]={1,5,7,3,2};
    int size = 5;
    bool ans = issorted(arr, size);
    if(ans){
        cout<<"ans is sorted"<<endl;
    }
    else {
        cout<<"not sorted"<<endl;
    }
    return 0;

}