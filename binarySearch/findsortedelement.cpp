#include<iostream>
using namespace std;
int firstOccur(int even[], int n, int key){
    int s =0, e=n-1;
    int mid = s+(e-s)/2;
    int ans =-1;
    while(s<=e){
        if(even[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if (key>even[mid])
        {
            s=mid+1;
        }
        else if (key<even[mid])
        {
            e=mid-1;
        }
        mid= s+(e-s)/2;  
    }
    return ans;

}
int lastOccur(int even[], int n, int key){
    int s =0, e=n-1;
    int mid = s+(e-s)/2;
    int ans =-1;
    while(s<=e){
        if(even[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if (key>even[mid])
        {
            s=mid+1;
        }
        else if (key<even[mid])
        {
            e=mid-1;
        }
        mid= s+(e-s)/2;  
    }
    return ans;

}

int main(){
    int even[8]={1,2,2,2,2,5,8,7};
    cout<<"The first occurence is "<< firstOccur(even,8,2)<<endl;
    cout<<"The Last occurence is "<< lastOccur(even,8,2)<<endl;

    return 0;

}