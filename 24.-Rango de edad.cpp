//Escribe un programa que solicite la edad del usuario y en la salida arroje si la edad esta dentro del rango de 18-25 años.
#include<iostream>
using namespace std;
int main(){
	
	int edad;
	
	cout<<"Digite su edad: "; cin>>edad;
	
	switch(edad){
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25: cout<<"Su edad se encuentra dentro del rango de 18 a 25 años";
		break;
		default: cout<<"Su edad no entra dentro del rango establecido";
	}
	
	return 0;
}
