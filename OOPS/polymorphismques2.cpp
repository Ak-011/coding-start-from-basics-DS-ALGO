#include<iostream>
#include<string.h>
using namespace std;

class B{

    public:
    int a; 
    int b;


    public:
    int add(){
        return a+b;
    }
     
    void operator+ (B &obj){
        int value1 = this->a;
        int value2 = obj.b;
        cout<<"output "<<value2-value1<<endl;
    }

    void operator() (){
        cout<<"Hello the operator is changed "<<this->a<<endl;
    }


};

int main(){
    B obj1, obj2;

    obj1.a = 3;
    obj2.a = 7;
    obj2.b = 9;
    obj1 + obj2;

    obj1();

    return 0;
}