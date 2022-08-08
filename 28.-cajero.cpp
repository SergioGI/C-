//Realice un programa que simule un cajero automatico con un saldo inicial de $1000.
#include<iostream>
using namespace std;
int main(){
	
	int opc, s=1000, cant, total, dep;
	
	cout<<"1.-Ahorros"<<endl;
	cout<<"2.-Retirar"<<endl;
	cout<<"3.-Depositar"<<endl;
	
	cout<<"Digite la accion que desea realizar: "; cin>>opc;
	
	switch (opc){
		case 1: cout<<"Su saldo actual es de: $"<<s<<endl;
		break;
		case 2: cout<<"Digite la cantidad a retirar: "; cin>>cant;
				if(cant<s){
				total=s-cant;
				cout<<"Su saldo restante es de: $"<<total<<endl;
	}else{
		cout<<"Usted no cuenta con el suficiente saldo para retirar";
		}
		break;
		case 3: cout<<"Digite la cantidad que desea depositar: $";cin>>cant;
				total=s+cant;
				cout<<"El total en su cuenta es de: $"<<total<<endl;
		break;
				default:cout<<"La opcion ingresada no se encuentra dentro de las opciones";
	}
	
	
	return 0;
}
