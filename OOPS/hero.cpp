#include<iostream>
#include "intro.cpp"
using namespace std;

int main(){

    Hero ramesh;

    ramesh.health=70;
    ramesh.level='A';
  //  cout<<"size : "<<sizeof(h1)<<endl;
    cout<<"Health is : "<<ramesh.health<<endl;
    cout<<"Level is: "<<ramesh.level<<endl;

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



*/