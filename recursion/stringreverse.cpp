#include<iostream>
using namespace std;
void reverseString(string& arr, int i, int j){
    if(i>j){
        return;
    }
    swap(arr[i],arr[j]);
    i++;
    j--;
    reverseString(arr,i,j);

}

int main(){
    string name = "ashish";
    reverseString(name, 0, name.length()-1);
    cout<<name<<endl;
    return 0;
}