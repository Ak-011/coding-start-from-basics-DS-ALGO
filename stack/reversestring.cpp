#include<iostream>
#include<stack>
using namespace std;

int main(){
    string mje = "Ashish";
    stack<char> s;

    for(int i =0; i<mje.length(); i++){
        char ch = mje[i];
        s.push(ch);
    }
    string ans =" ";

    for(int i =0; i<mje.length(); i++){
        char ch = s.top();
        ans.push_back(ch);
        s.pop();

    }

    cout<<"Reverse"<<ans<<endl;
    return 0;
}