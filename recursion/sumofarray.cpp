#include<iostream>
using namespace std;
int givenSum(int *arr , int size){
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    int remainingPart = givenSum(arr+1 , size-1);
    int sum = arr[0]+remainingPart;
    return sum;

}

int main(){
    int arr[5]={2,4,3,5,6};
    int size = 5;

    int sum = givenSum(arr, size);
    cout<<"the sum is "<<sum<<endl;
    return 0;

}