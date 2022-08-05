//Escribe la siguiente expresion en un programa en C a + b/c-d.
#include<iostream>
using namespace std;
int main(){
	
	float a, b, c, d, R;
	
	cout<<"agregue datos para la siguiente expresion: a + b/c-d"<<endl;
	cout<<"Ingrese el valor de a: "; cin>>a;
	cout<<"Ingrese el valor de b: "; cin>>b;
	cout<<"Ingrese el valor de c: "; cin>>c;
	cout<<"Ingrese el valor de d: "; cin>>d;
	
	R=(a+(b/(c-d)));
	
	cout<<"\nEl resultado es: "<<R<<endl;
	
	return 0;
}
