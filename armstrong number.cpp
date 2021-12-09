int main() {
    int n;
    cin>>n;
    int reverse =0;
    int original = n;
    while(n>0){
        int lastdigit = n%10;
        reverse = reverse + pow(lastdigit,3);
        n=n/10;
        
        
    }
    if(original==reverse)
    {
        cout<<"the number u entered is armstong number"<<endl;
    }
    else{
         cout<<"non armstrong"<<endl;
}
    return 0;
}
