#include<iostream>
using namespace std;

void sumo(int num){
	int sum = 0;
	for(int i =1; i<=num; i++){
		sum =sum+i;
			}
			cout<<sum<<endl;
			return ;
}

int main()
{
	int n;
	cin>>n;
	sumo(n);
	return 0;
}
