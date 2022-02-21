#include<iostream>
using namespace std;
bool findKey(int *arr, int size, int key){
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }

    else{
        bool remainingPart= findKey(arr+1, size-1, key);
        return remainingPart;
    }
}

int main(){
    int arr[5]={2,5,4,7,6};
    int size = 5;
    bool ans = findKey(arr, size, 8);
    if(ans==true){
        cout<<"present"<<endl;
    }
    else{
        cout<<"absent"<<endl;
    }
    return 0;

}
