//Escriba un programa que le pida al usuario un caracter y que nos indique en la salida si es una vocal mayuscula o minuscula.
#include<iostream>
using namespace std;
int main(){
	
	char letra;
	
	cout<<"Teclee una vocal: "; cin>>letra;
	
	switch(letra){
		case 'A':cout<<"la vocal tecleada es mayuscula";
		break;
		case 'E':cout<<"la vocal tecleada es mayuscula";
		break;
		case 'I':cout<<"la vocal tecleada es mayuscula";
		break;
		case 'O':cout<<"la vocal tecleada es mayuscula";
		break;
		case 'U':cout<<"la vocal tecleada es mayuscula";
		break;
		case 'a':cout<<"la vocal tecleada es minuscula";
		break;
		case 'e':cout<<"la vocal tecleada es minuscula";
		break;
		case 'i':cout<<"la vocal tecleada es minuscula";
		break;
		case 'o':cout<<"la vocal tecleada es minuscula";
		break;
		case 'u':cout<<"la vocal tecleada es minuscula";
		break;
		default:cout<<"la letra tecleada no es una vocal";
	}
	
	return 0;
}
