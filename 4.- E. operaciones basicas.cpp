//escribe en el programa que lea de la entrada dos numeros y muestre en la salida su suma, resta, multiplicacion y division.
#include<iostream>
using namespace std;

int main(){
	
	float a, b, suma=0, resta=0, multiplicacion=0, division=0;
	
	cout<<"introduce dos numeros: ";
	
	cin>>a;
	cin>>b;
	
	suma = a+b;
	resta = a-b;
	multiplicacion = a*b;
	division = a/b;
	
	cout<<"La suma de los numeros es: "<<suma<<endl;
	cout<<"la resta de los numeros es: "<<resta<<endl;
	cout<<"la multiplicacion de los numeros es:  "<<multiplicacion<<endl;
	cout<<"La division de los numeros es: "<<division;
	
	return 0;
}
