/*Hacer un menu que considere las 3 opciones siguientes:
1.- cubo de un numero
2.- numero par o impar 
3.- salir */
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	
	int opc, num, R;
	
	cout<<"1.-Cubo de un numero: "<<endl;
	cout<<"2.-numero par o impar"<<endl;
	cout<<"3.-Salir"<<endl;
	
	cout<<"Digite la opcion que desee realizar: "; cin>>opc;
	
	switch (opc){
		case 1: cout<<"Digite el numero: "; cin>>num;
				R=pow(num,3);
				cout<<"\nEl numero elevado al cubo es= "<<R<<endl;
		break;
		case 2: cout<<"Digite el numero: "; cin>>num;
				if(num%2){
					cout<<"\nEl numero es impar";
				}else{
					cout<<"\nEl numero es par";
				}
		break;
		case 3: break;
		default:cout<<"\nLa opcion digitada no existe";
	}
	
	return 0;
}
