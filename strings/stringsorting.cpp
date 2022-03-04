#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

bool compareLength(string a, string b ){
    if(a.length()==b.length()){
        return a<b;
    }
    return a.length()> b.length();
}

int main(){
    int n;
    cin>>n;
    cin.get();
    
    string s[100];   //vector

    for(int i =0; i<n; i++){
        getline(cin,s[i]);
    }
    sort(s,s+n,compareLength);
    
    for(int i =0; i<n; i++){
        cout<<s[i]<<endl;
    }


}