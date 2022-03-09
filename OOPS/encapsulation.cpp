#include<iostream>
#include<string.h>
using namespace std;

class Student{

    private:
    string name ;
    int age;
    int height;

    public:
    int getAge(){
        return this-> age;
    }


};

int main(){

    Student ashish;

    cout<<"All is well"<<endl;

    return 0;

}


// Encapsulation ==  Wrapping up data members and fnctions into single entity

// fully encapsulated class =  is all the data members are 
//  under private

//  why do we encapsulation what are advantages?

//  synonmys - information hiding / data hiding  
//  1. we can hide the data members is first one
//  our security will increase

//  2.if we want we can make class read only  by creating 
//  getter and not creating the setter so can change the data

//  3. code reusability 

//  4. help in unit testing 


