 /*Realice un programa que pida de entrada los siguientes datos de una persona 1.-edad 2.-sexo 3.- altura. posteriormente
 debe mostrar los datos capturados en la pantalla*/
 #include<iostream>
 using namespace std;
 int main(){
 	
 	int edad;
 	char sexo[15];
 	float altura;
 	
 	cout<<"ingrese su edad: "; cin>>edad;
 	cout<<"ingrese su sexo: "; cin>>sexo;
 	cout<<"ingrese su altura: "; cin>>altura;
 	
 	cout<<"\nSu edad es: "<<edad<<endl;
 	cout<<"\nSu sexo es: "<<sexo<<endl;
 	cout<<"\nSu altura es: "<<altura<<endl;
 	
 	
 	return 0;
 }
