    #include <iostream>
    using namespace std;
    
    
    int comb(int k){
    int mul = 1;
    for(int i =1; i<=k; i++){
        mul = mul*i;
    }
    return mul;
}


int main() {
    int n;
    cin>>n;
    cout<<"1"<<endl;
    for(int i=1; i<=n; i++){
        for(int j=0; j<=i; j++){
                cout<<comb(i)/(comb(j)*comb(i-j));

        }
        cout<<endl;
    }
    return 0;
}
