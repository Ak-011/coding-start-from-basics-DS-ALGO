#include<iostream>
using namespace std;

int binearysearch(int arr[], int n, int key){
	int s = 1;
	int e = n;
	while(s<=e){
		int mid = (s+e)/2;
		
		if(arr[mid]==key){
			return mid;
		}
		else if(arr[mid]>key){
		 	e = mid-1;
		 }
		else if(arr[mid]<key){
		 	s = s+1;
		 }
	}
	return -1;
}





int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i = 1; i<=n; i++){
		cin>>arr[i];
	}
	
	int key;
	cin>>key;
	cout<<binearysearch(arr,n,key)<<endl;
	return 0;
}
