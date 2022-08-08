/*Escribe un programa que pida inicialmente 3 numeros al usuario, que pida un numero mas e indique en la 
salida si el 4to numero coincide con alguno de los primeros tres numeros ingresados*/
#include<iostream>
using namespace std;
int main(){
	
	int a, b, c, dato;
	
	cout<<"Digite 3 numeros: "; 
	cin>>a>>b>>c;
	
	cout<<"Digite otro numero: ";
	cin>>dato;
	
	if(dato==a || dato==b || dato==c){
		cout<<"\nEl numero que se repite es: "<<dato<<endl;
	}else{
		cout<<"\nNo se repite algun numero";
	}
	
	return 0;
} 
