//escriba la siguiente expresion en un programa   a/b  +  1.
#include<iostream>
using namespace std;
int main(){
	
	
	float resultado, a, b;
	
	cout<<"introduzca el valor de a: "; cin>>a;
	cout<<"introduzca el valos de b: "; cin>>b;
	
	resultado= (a/b)+1;
	
	cout.precision(4);
	cout<<"\nEl resultado es: "<<resultado<<endl;
	
	return 0;
}
