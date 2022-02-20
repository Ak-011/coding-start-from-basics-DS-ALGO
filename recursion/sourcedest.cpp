#include<iostream>
using namespace std;

void homeStation(int src, int dest){
     cout<<"src = "<<src<<" dest = "<<dest<<endl;
    if(src == dest){
        cout<<"Done im at home"<<endl;
        return ; 
    }
     src++;
     homeStation(src, dest);
}

int main(){
    int dest = 10;
    int src = 1;

    homeStation(src, dest);

    return 0;

}