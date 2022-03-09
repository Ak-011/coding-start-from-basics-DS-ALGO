#include<iostream>
#include<string.h>
using namespace std;

class A{
    public:
    void sayHello(){
        cout<<"Ashish"<<endl;
    }
    void sayHello(string name){
        cout<<"Ashish"<<name<<endl;
    }
    int sayHello(string name, int n){
        cout<<"Ashish"<<name<<endl;
        return n;
    }
};


int main(){

    A obj;
    obj.sayHello();


    return 0;
}