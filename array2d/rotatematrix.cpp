#include<iostream>
#include<algorithm>
using namespace std;

void rotate(int a[][1000], int n){

    //reverse each row
    for(int row =0; row<n; row++){
        int start_col = 0;
        int end_col = n-1;
        while (start_col<end_col)
        {
            swap(a[row][start_col],a[row][end_col]);
            start_col++;
            end_col--;
        }
        
    }
    // take transpose
    for(int i =0; i<n; i++){
        for(int j =0; j<n; j++){
            if(i<j){
                swap(a[i][j],a[j][i]);
            }
        }
    }


}

void rotate_stl(int a[][1000], int n){
    // same thing using stl reverse method
    //reverse(start_container, end_container)
    for(int i =0; i<n; i++){
        reverse(a[i],a[i]+n); 
    }

     for(int i =0; i<n; i++){
        for(int j =0; j<n; j++){
            if(i<j){
                swap(a[i][j],a[j][i]);
            }
        }
    }


}

int main(){
    int a[1000][1000];
    int n ;
    cin>>n;
    for(int i =0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    rotate(a,n);
    rotate_stl(a, n);

    return 0;
}