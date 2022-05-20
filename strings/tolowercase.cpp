#include<iostream>
#include<string>
using namespace std;

char toLowerCase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }else{
        char temp = ch-'A'+'a';
        return temp;
    }
}

int main(){
    string s = "Ashish";
    cout<<s.length()<<endl;
    cout<<toLowerCase('C'); 
    return 0;
}