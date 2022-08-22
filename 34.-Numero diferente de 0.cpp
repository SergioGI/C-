/*Realice un programa que pida al usuario numeros y que el programa se detenga cuando el usuario digite un 0. En seguida el programa debe mostrar
el conteo total de los numeros enteros introducidos.*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	
	int num, conteo=0;
	
	do{
		cout<<"Digite un numero: "; 
		cin>>num;
		
		if(num>0){
			conteo++;
    	}
		
	}while(num!=0);
	
		cout<<"\nEl total de cantidades positivas digitadas fueron: "<<conteo<<endl;
	
	getch();
	return 0;
}
