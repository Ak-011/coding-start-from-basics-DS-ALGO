#include<iostream>
#include<string.h>
using namespace std;

class Animal{
    public:
    void speak(){
        cout<<"Speaking"<<endl;
           }
};
class Dog: public Animal{
    public:
    void speak(){
        cout<<"Barking"<<endl;
    }
};

int main(){

    Dog obj1;
    obj1.speak();
    return 0;

}

/*
function got changed by demand 


*/