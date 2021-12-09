int comb(int num){
    int mul =1;
    for(int i=1; i<=num; i++){
        mul=mul*i;
    }
    return mul;
}

int main() {
    int n,r;
    int permu;
    cin>>n>>r;
    comb(n);
    comb(r);
    comb(n-r);
    permu = comb(n)/(comb(r)*comb(n-r));
    cout<<permu;
    return 0;
}
