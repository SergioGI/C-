//sentencia switch
#include<iostream>
using namespace std;
int main(){
	
	int num;
	
	cout<<"Digite un numero: "; cin>>num;
	
	switch (num){
		case 1: cout<<"Digito el numero 1";
		break;
		case 2: cout<<"digito el numero 2";
		break;
		case 3: cout<<"Digito el numero 3";
		break;
		case 4: cout<<"digito el numero 4";
		break;
		case 5: cout<<"Digito el numero 5";
		break;
		default: cout<<"El numero no se encuentra en el rango de 1 a 5";
	}
	
	return 0;
}
