bool isprime(int num){
    for(int j = 2; j<=sqrt(num); j++){
        if(num%j==0){
            return false;
        }
    }
    return true;
    
}






int main(){
    int a, b ;
    cin>>a>>b;
    for(int i = a; i <b; i++){
        if(isprime(i)){
            cout<<i<<endl;
        }
    }
    return 0;
}
