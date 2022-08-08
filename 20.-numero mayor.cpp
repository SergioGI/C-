//Escriba un programa que pida 3 numeros e indique cual es el mayor.
#include<iostream>
using namespace std;
int main(){
	
	int num, num1, num2;
	
	cout<<"Digite 3 numeros: ";
	cin>>num>>num1>>num2;
	
	if(num<num1 && num1<num2){
		cout<<"El numero mayor es: "<<num2;
	}else if(num<num1 && num2<num1){
		cout<<"El numero mayor es: "<<num1;
	}else if(num>num1 && num>num2){
		cout<<"El  numero mayor es: "<<num;
	}else{
		cout<<"los numeros son iguales";
	}
	
	return 0;
}
