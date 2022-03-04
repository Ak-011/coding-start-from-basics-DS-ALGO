#include<iostream>
using namespace std;

void magical_park(char a[][100], int m, int n, int k , int s){
    //piyush can get out of the park
    int y =0;

     for(int i =0; i<m; i++){
         for(int j=0; j<n; j++){
             char ch = a[i][j];

             if(s<k){
                 y = 1;
                 
                 break;
                 
             }

            if(ch =='*'){
                s+=5;
            }
            else if(ch == '.'){
                s-=2;
            }
            else{
                break;
            }
            //we also loose one stregthen when we move right except for last column

            if(j != n-1){
                s--;
            }
         }
     }
     if(y == 0){
         cout<<"Yes"<<endl;
         cout<<s<<endl;
     }
    else{
        cout<<"No"<<endl;
            }
}

int main(){
    int m , n ,k , s;
    cin>>m>>n>>k>>s;
    char a[100][100];
     for (int i = 0; i <m ; i++) {
    for (int j = 0; j <n ; j++) {
      cin >> a[i][j];
    }
  }

    magical_park(a,m,n,k,s);
    
    return 0;


}