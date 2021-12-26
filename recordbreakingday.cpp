#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int mx =0;
    for(int i =0; i<n; i++){
        cin>>a[i];
    }
    for(int i =0; i<n; i++){
        for(int j =0; j<n; j++){
            mx=max(mx,a[j]);
            mx = max(mx,a[i]);
        }
    }
    for(int i =0; i<n; i++){
    	if(mx==a[i]){
    		cout<<i<<endl;
		}
	}
	return 0;

}
