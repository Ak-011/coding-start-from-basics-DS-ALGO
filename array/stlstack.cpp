#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string>s;
    s.push("ashish");
    s.push("kumar");
    s.push("best");
    cout<<"First element"<<s.top()<<endl;
    s.pop();
    cout<<"Top element"<<s.top()<<endl;
    cout<<"size of the element"<<s.size()<<endl;
    cout<<"Empty or not"<<s.empty()<<endl;
}
