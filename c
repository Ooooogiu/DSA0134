#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<"Enter a value";
	cin>>a;
	cout<<"Enter b value";
	cin>>b;
	cout<<"Enter your choice";
	cin>>c;
	if(c==1){
		d=a+b;
		cout<<"addition of a and b="<<d;
	}
	else if(c==2){
		d=a-b;
		cout<<"subtraction of a and b="<<d;
	}
	else if(c==3){
		d=a%b;
		cout<<"module of a and b="<<d;
	}
		else if(c==4){
		d=a*b;
		cout<<"multipcation of a and b="<<d;
	}
	else{
		cout<<"Enter a valid choice";
	}
}
