#include<iostream>
using namespace std;

bool checkPalindrone(char name[], int n){
    int s=0;
    int e= n-1;

    while(s<=e){
        if(name[s] != name[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }

    }
    return 1;
}

void reverse(char name[], int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++], name[e--]);
    }
}
int getLength(char name[]){
    int count = 0;
    for(int i=0; name[i]!='\0'; i++){
        count ++;
    }
    return count;
}

int main(){
    
    char name[20];

    cout<< " enter the name"<<endl;
    cin>>name; 
    //name[2]= '\0';

    cout<<"Your name is"<<endl;
    cout<<name<<endl;
    int len = getLength(name);
    cout<<len<<endl;
    reverse(name, len);
    cout<<"your name is "<<endl;
    cout<<name<<endl;

    cout<<"Palindrone or not"<<checkPalindrone(name, len)<<endl;
    return 0;


}