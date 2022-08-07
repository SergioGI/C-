//Realiza un programa que lea la nota final de 4 alumnos y calcule la nota final media de los 4 alumnos;
#include<iostream>
using namespace std;
int main(){
	
	float a, b, c, d, R;
	
	cout<<"Digite la calificacion del primer alumno: "; cin>>a;
	cout<<"Digite la calificacion del segundo alumno: "; cin>>b;
	cout<<"Digite la calificacion del tercero alumno: "; cin>>c;
	cout<<"Digite la calificacion del cuarto alumno: "; cin>>d;
	
	R= (a+b+c+d)/4;
	
	cout<<"\nLa calificacion promedio de los alumnos es: "<<R<<endl;
	
	return 0;
}
