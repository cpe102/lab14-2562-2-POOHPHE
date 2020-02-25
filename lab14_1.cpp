#include <iostream>
using namespace std;


int main(){
	//Write your code here.
	int a=5;
	string b="A";
	string &c=b;
	int *x=&a;
	string *y=&b;
	int **z=&x;
	//kill
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	cout<<"c = "<<c<<endl;
	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;
	cout<<"z = "<<z<<endl;
	cout<<endl;
	//address
	cout<<"&a = "<<&a<<endl;
	cout<<"&b = "<<&b<<endl;
	cout<<"&c = "<<&c<<endl;
	cout<<"&x = "<<&x<<endl;
	cout<<"&y = "<<&y<<endl;
	cout<<"&z = "<<&z<<endl;
	cout<<endl;
	c="F";
	
	//kill
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	cout<<"c = "<<c<<endl;
	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;
	cout<<"z = "<<z<<endl;
	cout<<endl;
	*y="W";
	//kill
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	cout<<"c = "<<c<<endl;
	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;
	cout<<"z = "<<z<<endl;
	cout<<endl;
	
	*x=6;
	//kill
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	cout<<"c = "<<c<<endl;
	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;
	cout<<"z = "<<z<<endl;
	cout<<endl;
	
	
	**z=7;
	//kill
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	cout<<"c = "<<c<<endl;
	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;
	cout<<"z = "<<z<<endl;
	cout<<endl;
	
	return 0;
}
