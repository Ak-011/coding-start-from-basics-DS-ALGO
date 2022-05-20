# include <iostream>
using namespace std;

int main() {
    int n ;
    cin>>n;
    int arr[n][n];
     for(int i =1; i<= n; i++){
        for(int j =1; j<=n; j++){
            cin>>arr[i][j];
        }
    }
  int sum1 = 0, sum2 =0;
     for(int i =1; i<= n; i++){
        for(int j =1; j<=n; j++){
            if( i%2 != 0  && j%2 != 0){
              sum1 = sum1+arr[i][j];
            }
          else if(i%2 == 0 &&  j%2 == 0){
            sum1 = sum1+arr[i][j];
          }else{
            sum2 = sum2+arr[i][j];
          }
        }
    }
    cout<<sum1<<endl;
    cout<<sum2<<endl;
  
    return 0;
}