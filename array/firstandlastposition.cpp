
#include <iostream>
using namespace std;

void returnPosition(int arr[], int n, int key){
    int first =-1;
    int last = -1;
    
    for(int i =0; i<n; i++){
        if(key != arr[i]){
            continue;
        }
        if(first == -1){
            first = i;
        }
        last = i;
    }
    
    if(first != -1){
        cout<<first<<" "<<last<<endl;
    }else{
        cout<<"-1"<<" "<<-1<<endl;
    }
}

int main() {
    //Write your code here
    int n,d;
    cin>>n>>d;
    
    int arr[n];
    
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    returnPosition(arr, n, d);
    
 

    return 0;
}