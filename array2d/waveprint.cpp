//sqaure wave generator

#include<iostream>
using namespace std;

int main(){
    int a[500][300]={0};
    int m, n;
    cin>>m>>n;
    //iterate over the array
    int val =1;
    for (int row = 0; row<=m-1; row++){
        for(int col = 0; col<=n-1; col++){
            a[row][col] = val;
            val = val+1;

            cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }
  
  
     for(int col = 0; col<n; col++){
         if(col%2==0){
             //Even col-top down direction
             for(int row=0; row<m; row++){
                 cout<<a[row][col]<<" ";
             }
         }
         else{
             //bottom up direction
            for(int row = m-1; row>=0; row--){
                cout<<a[row][col]<<" ";
            }
         }

     }
     return 0;

}