
#include<iostream>
#include<string.h>
using namespace std;

class Animal{
    public:
    int age ;
    int weight;

    public:
    void bark(){
        cout<<"barking"<<endl;
    }
};
class Human{
    public: 
    string color;

    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }


};
//multiple inheritance
class Hybrid: public Animal , public Human{


};
int main(){
     
    Hybrid m2;
    m2.speak();
    m2.bark();


    
    return 0;
}


/*
1. single inheritance
2. multiple level
3.multiple inheritance



*/