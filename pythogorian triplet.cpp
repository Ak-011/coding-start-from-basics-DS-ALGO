#include<iostream>
using namespace std;

void pyth(int p, int q, int r){
	
	int x,y,z;
	x= max(p, max(q,r));
	if(x==p){
		y=q;
		z=r;
	}
	else if(x==q){
		y=p;
		z=r;
	}
	else if(x==r){
		y=q;
		z=p;
	}
	
	if(x*x==(y*y+z*z)){
		cout<<"this is pythgorian triplet"<<endl;
	}
	else{
		cout<<"not pythgorian triplet"<<endl;
	}
	return;
}
int main(){
	int a , b , c;
	cin>>a>>b>>c;
	pyth(a,b,c);
	return 0;

}
