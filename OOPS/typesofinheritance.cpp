#include<iostream>
#include<string.h>
using namespace std;

class Animal{
    public:
    int age ;
    int weight;

    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};
class Dog: public Animal{


};

class GermanShepherd: public Dog{

};

int main(){
     
    GermanShepherd g;
    g.speak();
    cout<<g.age<<endl; 

    
    return 0;
}


/*
1. single inheritance
2. multiple level
3.multiple inheritance
4.Hirarchical 
5.hybrid inheritance -
{combination of more then one type of inheritance}



*/