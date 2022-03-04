#include<iostream>
#include<string>
using namespace std;

int main(){
    string s0;
    string s1("Hello");
    string s2 = "Hello World";
    string s3(s2);

    string s4=s3;

    char a[] = {'a','b','c','d'};
    string s5(a);

    cout<<s0<<endl;
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;
    cout<<s4<<endl;
    cout<<s5<<endl;

    if(s0.empty()){
        cout<<"s0 is an empty string"<<endl;
    }

    //Append
    s0.append("i love c++");
    cout<<s0<<endl;
    s0+= "and python";
    cout<<s0<<endl;

    cout<<s0.length()<<endl;
    s0.clear();
    cout<<s0.length()<<endl;



//comapre string
string s9 = "apple";
string s8 = "mango";
cout<<s9.compare(s8)<<endl; // returns an integer ==0 equal , > or < 0
 
 //overloadaed operator
if(s8>s9){
    cout<<"mango is lexi greater then apple"<<endl;
}
cout<<s1[0]<<endl;

string s7 = "i want to have apple juice";
int idx = s7.find("apple");
cout<<idx<<endl;

// remove a word from the string 
string word = "aaple";
int len = word.length();
s7.erase(idx, len);
cout<<s7<<endl;

// iterate over aal the character in the string

for(int i = 0 ; i<s7.length()-1; i++){
    cout<<s7[i]<<':';
}
cout<<endl;
//iterators
for(auto it = s7.begin(); it!= s7.end(); it++){
    cout<<(*it)<<"<>";
}
cout<<endl;
//for each loop
for(auto c:s1){
    cout<<c<<".";
}

}