#include<iostream>
#include<string.h>
using namespace std;

class A{

    public:
    void func(){
        cout<<"Im A"<<endl;
    }
};

class B{
    public:
    void func(){
        cout<<"Im B"<<endl;
    }
};

class C: public A, public B{

};

int main(){
    C obj;

    obj.A::func();
    obj.B::func();
    
    return 0;
}



/*
if there will be same name function in different classes then which o
of the function to be called is the ambiguity arises hence 
we use the scope resolution operator to clarify that


*/
