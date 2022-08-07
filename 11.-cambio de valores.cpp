//Escriba un programa que cambie los valores de dos variables
#include<iostream>
using namespace std;
int main(){
	
	float a, b, aux;
	
	cout<<"Escriba el valor de a: ";
	cin>>a;
	cout<<"Escriba el valor de b: ";
	cin>>b;
	
	aux=a;
	a=b;
	b=aux;
	
	cout<<"\nEl nuevo valor de a es: "<<a<<endl;
	cout<<"\nEl nuevo valor de b es: "<<b<<endl;
	
	return 0;
} 
