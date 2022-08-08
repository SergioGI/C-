//Escribe un programa que determine entre dos numeros, cual es el mayor.
#include<iostream>
using namespace std;
int main(){
	
	int num1, num2;
	
	cout<<"Introduzca un numero: "; cin>>num1;
	cout<<"Introduzca otro numero: "; cin>>num2;
	
	if(num1<num2){
		cout<<"El numero "<<num2<<" es mayor";
	}else if(num2<num1){
		cout<<"El numero "<<num1<<" es mayor";
	}else{
		cout<<"Los digitados numeros son iguales";
	}
	
	return 0;
}
