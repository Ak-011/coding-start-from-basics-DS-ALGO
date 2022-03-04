#include<iostream>
#include<cstring>
using namespace std;

// char *strtok(char *s, char *delimiter)
//return a token on each subsequent call
//on the first call function should be passed with string argument for 's'
// on subsquent calls we should pass the string argument as null

char *mystrtok(char *str, char delim){
    //string and single chharacter acts as deliminter
    static char*input = NULL;
    if(str!=NULL){
        //we are making the first call
        input = str;
    }

//start exracting tokens and store them in the array

   // char *output = new char [strlen(input)+1]
  //  for(int i =0 ; input[i]!=NULL; i++)

}
int main(){
    char s[100] = "Today is , a sunny day";
    char *ptr = strtok(s, ", ") ;
    cout<<ptr<<endl;

    while (ptr!=NULL)
    { 
         ptr = strtok(NULL, ", ");
        cout<<ptr<<endl;
    }
    

    return 0;

}