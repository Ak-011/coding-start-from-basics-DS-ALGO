#include<iostream>
using namespace std;

int main(){

   cin>>m>>n;
    //iterate over the array
    int  int a[500][300]={0};
    int m, n;
    val =1;
    for (int row = 0; row<=m-1; row++){
        for(int col = 0; col<=n-1; col++){
            a[row][col] = val;
            val = val+1;

            cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }
  
  
    return 0;
}