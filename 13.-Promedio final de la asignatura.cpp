/*La calificacion final de un estudiante es el promedio de tres  notas:
-la nota practica que vale un 30%
-La nota teorica que cuenta un 60%
-la nota de participacion que vale un 10%
Escribe un programa que lea las notas del alumno y nos arroje la nota final.*/

#include<iostream>
using namespace std;
int main(){
	
	float a, b, c, R;
	
	cout<<"Digite el promedio de la nota practica: "; cin>>a;
	cout<<"Digite el promedio de la nota teorica: "; cin>>b;
	cout<<"Digite el promedio de la nota de participacion: "; cin>>c;
	
	R=((a*.30)+(b*.60)+(c*.10));
	
	cout<<"\nEl promedio final de la asignatura es: "<<R<<endl;
	
	return 0;
}
