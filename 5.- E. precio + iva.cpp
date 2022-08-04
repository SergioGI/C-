//Realiza el programa en donde lea de la entrada el precio de un producto y en la salida muestre el precio total aplicando el iva (16%).
#include<iostream>
using namespace std;
int main(){
	
	float P, resultado=0, iva=0, I=.16;
	
	cout<<"introduce el precio del producto: "; 
	cin>>P;
	
	iva = P*I;
	resultado=iva+P;
	
	cout<<"El precio total con iva es de: $"<<resultado<<endl;
	
	
	return 0;
}
