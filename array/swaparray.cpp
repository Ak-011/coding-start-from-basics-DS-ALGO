#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int  i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
void swapArray(int arr[], int size){
    for(int i =0; i<size; i=i+2){
        if(i+1<size){
        swap(arr[i],arr[i+1]);
        }
    }
}

int main(){
    int even[8]={5,2,4,9,7,8,3,5};
    int odd[7]={5,4,7,8,41,45,42};
    
    swapArray(even,8);
    printArray(even,8);

    swapArray(odd,7);
    printArray(odd,7);
}