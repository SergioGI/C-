//realice un programa que calcule el valor que toma la siguiente funcion para valores dados de x y y. f(x,y)=vx / y^2 - 1.
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	
	float x, y, f;
	
	cout<<"Digite el valor de x: ";
	cin>>x;
	cout<<"Digite el valor de y: ";
	cin>>y;
	
	f=((sqrt(x))/(pow(y,2)-1));
	
	cout<<"\nEl resultado es: "<<f<<endl;
	
	return 0;
}
