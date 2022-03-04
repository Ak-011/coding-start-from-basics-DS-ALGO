/*Given a list of 'n' strings S0,S1,S2,……,Sn-1, each consisting of digits and spaces, the number of spaces is the same for each entry, the goal is to implement a variation of a sort command. None of the strings contains consecutive spaces. Also, no string starts with a space nor ends with it. Spaces are used to divide string into columns, which can be used as keys in comparisons.

The program has to support the required parameters:

key: integer denoting the column used as a key in comparisons. The left-most column is denoted by 1.

reversed: boolean variable indicating whether to reverse the result of comparisons.

comparison-type: either lexicographic or numeric. Lexicographic means that we use Lexicographical order where for example (122 < 13) . Numeric means that we compare the strings by their numerical values, so (13 < 122) . If the comparison type is 'numeric' and numeric values of keys of Si and Sj are equal for i < j , then Si is considered strictly smaller than Sj because it comes first.



Input Format
In the first line, there is a single integer 'n' denoting the number of strings to sort. In the i-th of the following n lines there is a string Si. In the last line, there are 3 space-separated values, denoting the values of variables 'key','reversed' , comparison-type.
*/

#include<iostream>
#include<cstring>
using namespace std;

string exractSttringAtKey(string str, int key){
    char *s = strtok((char *)str.c_str(), " ");        //char *str me hi hona chhaiye hmesha ok
    while (key>1)
    {
        s = strtok(NULL, " ");
        key --;
    }
    return (string)s;
}

int main(){
    int n;
    cin>>n;
    cin.get();
    
    string a[100];
    for(int i =0; i<n; i++){
        getline(cin,a[i]);
    }
    int key ;
    string reversal, ordering;




}
//not completed
