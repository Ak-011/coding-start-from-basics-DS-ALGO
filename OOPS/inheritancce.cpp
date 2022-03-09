#include<iostream>
#include<string.h>
using namespace std;

class Human {

   protected: 
    int height;
 public:

    int weight;

    private:
    int age;

    public:
    int getAge(){
        return this->age;
    }
    void setWeight(int w){
        this->weight = w;
    }
};

class Male: public Human{
    public:
    string color;

    void sleep(){
        cout<<"Male sleeping"<<endl;
    }

    int getHeight(){
        return this->height;
    }
};

int main(){

     Male m1;
    cout<<m1.getHeight()<<endl;
    




    // Male object1;
    // cout<<object1.age<<endl;
    // cout<<object1.weight<<endl;
    // cout<<object1.height<<endl;
    // cout<<object1.color<<endl;
    // object1.setWeight(100);
    // cout<<object1.weight<<endl;
    // object1.sleep();




    return 0;
}

/*
DNA property like thing characteristics that is inherit from parents 

there will be class which have some property  what we 
wiil do is we inherit some of there properties to our class 
this is called inherit 

                    HUMAN[parent class]

            MALE    -[child/ sub class]-      FEMALE

            here male and female inherit the class human
            ok we can now use there properties

private data members cant be inherit any way

types of inheritance
1.single
2.multi level
3. multiple
4.hybrid
5.hierarchal



*/