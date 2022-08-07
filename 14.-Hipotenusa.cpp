//Escribe un programa que pida de entrada los dos catetos de un triangulo y arroje de salida el valor de la hipotenusa.
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	
	float a, o, h;
	
	cout<<"Digite el valor del cateto opuesto: ";cin>>o;
	cout<<"Digite el valor delcateto adyacente: ";cin>>a;
	
	h=(sqrt(pow(a,2)+pow(o,2)));
	
	cout.precision(3);
	
	cout<<"\nLa hipotenusa del triangulo mide: "<<h<<endl;
	
	return 0;
}
