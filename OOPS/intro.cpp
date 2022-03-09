#include<iostream>
#include<string.h>
using namespace std;

class Hero{

    private:
    //properties
         int health;
  // private: 
  public:
        char *name;
         char level;
         static int timeToComplete;

    Hero(){
        cout<<"Default constructor called:  "<<endl;
        name = new char[100];
    }
    //copy constructor



    Hero(Hero& temp){ 
        
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch, temp.name);
        this->name = ch;
        // cout<<"Copy Contructor called"<<endl;
        this->health = temp.health;
        this->level = temp.level;
     } 



//paramaterized constructor
//"this"= it is a pointer who store the location of curent object eg Hero ramesh 
// then the ramesh address will be stored in the this pointer 

    Hero(int health){
        cout<<"this->"<<this<<endl;
        this->health = health;
    }
     
    Hero(int health, char level){
        this->level=level;
        this->health = health;
    }
     

   void print(){
       cout<<"[";
       cout<<this->health<<","; 
       cout<<" "<<this->level<<",";
       cout<<" "<<this->name<<",";
       cout<<"]"<<endl;

   }

   int getHealth(){
       return health;
   }

   char getLevel(){
       return level;
   }


    void setHealth( int h){

        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }

       
   void setName(char name[]){
       strcpy(this->name, name);
   }

    static int random(){
        return timeToComplete ;
    }


   ~Hero(){
       cout<<"Distructor is called: "<< endl;
   }


};

int Hero:: timeToComplete = 5;

int main(){
    
    
    cout<<Hero::timeToComplete<<endl;
    cout<<Hero::random()<<endl;
    
    Hero a;
    cout<<a.timeToComplete<<endl;

    Hero b;
     b.timeToComplete = 13;
     cout<<a.timeToComplete<<endl;
     cout<<b.timeToComplete<<endl;

    //Hero a;
    
    // Hero *b = new Hero;
    // delete b;

    // return 0;
}

// int main(){

//     Hero h1;
//     h1.setHealth(33);
//     h1.setLevel('A');
//     char name[7] = "Ashish";
//     h1.setName(name);
//    // h1.print();

// //use default copy const 

// //how to call copy constructor
//    Hero  h2(h1);
//   // h2.print();

//     h1.name[0] = 'G';
//    h1.print();
//    h2.print();
//   // Hero h2 = h1;

//     h1 = h2;
//     h1.print();


//     return 0;

// }
/*int main(){
    Hero h1;
    cout<<"size: "<<sizeof(h1)<<endl;

    return 0;
}
/* 
if it was empty classs then what will happen to  size now
in this scenario empty class will have 1 memory size imp for interview

Public data members can be accessed anywhere in the code 


GETTER/ SETTER 

/SHALLOW AND DEEP COPY important
default copy constructor do the shallow copy

in shallow copy same array is used while in the deep copy we 
make the entirely new array  now the change in the first array 
do not reflect in the other array 


STATIC KEYWORD

IT CREATE AN data membes which belongs to class =important

[datatype class name :: field name = value;]

STATIC FUNCTION
no necessart to create the object  to call 
static function can only access to static members =[very imp]


WHAT WE HAVE LEARNED TILL NOW 

1.CLASS 
2. OBJECT 
        DATA MEMBERS
        BEHAVIOUR / FUNCTION
3. ACCESS MODIFIER 
        PUBLIC
        PRIVATE
4. STATIC/ DYNAMIC ALLOCATION 
5. CONSTRUCTOR
        SIMPLE
        DEFAULT
        PARAMETERIZED
        COPY CONSTRUCTOR
6. COPY ASSIGNMENT OPERATOR
7. DESTRUCTOR
        STATIC 
        DYNAMIC
8. PADDING AND GREEDY ALIGNMENT
9. DEEP/SHALLOW COPY 
10 . CONST KEYWORD - FUNCTIONS ,  INITILIZAION KEYWORDS
11. STATIC DATA MEMBERS / FUNCTIONS

*/