#include<iostream>
//#include "intro.cpp"
using namespace std;

int main(){

    //Hero suresh;
    //suresh.setHealth(55);
    //suresh.setLevel('D');

    // we can also write all those things in below way 

    Hero suresh(55,'B');
    suresh.print();

    //let create new object again
    //here the copy constructor is called actually copy constructor 
    // is inbuilt generated when we write the class 
    //and we can also write our own copy constructor if required
    Hero R(suresh);
    R.print();


    // how we can write the above line in simple way

  //  R.health = suresh.health;
  //  R.level = suresh.level;








    /*
    Hero ramesh(10);
    ramesh.print();
  
  //  cout<<"Address of ramesh "<<&ramesh<<endl; 
    
    Hero *h = new Hero(11);
    h->print();

    Hero temp(70,'A');
    temp.print();
*/

}
