#include<iostream>
#include<string>
//#include "intro.cpp"
using namespace std;

int main(){

       //statically created
    
        Hero a;

        //dynamically 
        Hero *b = new Hero(); 
        delete b;






    // //Static memory allocation
    // Hero a;
    // a.setHealth(80);
    // a.setLevel('A');

    // cout<<"Level is: "<<a.level<<endl;
    // cout<<"Health is: "<<a.getHealth()<<endl;

    // //Dynamic memory allocation
    // Hero *b = new Hero;
    // b->setHealth(95);
    // b->setLevel('C');

    // cout<<"Level is = "<<(*b).getLevel()<<endl;
    // cout<<"Health is = "<<(*b).getHealth()<<endl;

    // cout<<"Level is = "<<b->getLevel()<<endl;
    // cout<<"Health is= "<<b->getHealth()<<endl;
    //    /* Hero ramesh;

//     cout<<"Size of Ramesh: "<<sizeof(ramesh)<<endl;

//     cout<<" Ramesh health is: "<< ramesh.getHealth()<<endl;
//     ramesh.setHealth(70);
//   //  ramesh.health=70;
//     ramesh.setLevel('A');
//   //  cout<<"size : "<<sizeof(h1)<<endl;
//     cout<<"Health is : "<<ramesh.getHealth()<<endl;
//     cout<<"Level is: "<<ramesh.getLevel()<<endl;

    return 0;
}
/*
if u want to access to data members then by using dot operators 

Access modifiers
there are three types of accesss modifiers are
private 
public
protected

access modifier is used to understand the scope of that data members

by default -access modifiers-PRIVATE

Private data members can only be used inside the class

Protected


STRUCTURE PADDING IS IMPORTANT PLEASE REVISE

{{{{{{{{{{{{{{{{{{{{{{{{{{}}}}}}}}}}}}}}}}}}}}}}}}}}

[CONSTRUCTOR]


invoke during object creation 
no return type
no input parameter
  

  when we write 
  Hero ramesh : what does that means it means ramesh.Hero() but the point 
  is that there is no Hero() function is present


1. Paramaterized constructor = ?
2.copy constructor
3. Shallow and Deep copy
4.copy assignment operator

[[[[DESTRUCTOR]]]]

to de-allocate the memory deconst is called;
what is difference between construc and de-contruc is only symbol thats it

every object that has been created statically discructor will call 
automatically while in case of dynamically  we have to call 
manually destructor



*/