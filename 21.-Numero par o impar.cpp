//realice un programa que lea un valor entero y determine si se trata de un valor par o impar.
#include<iostream>
using namespace std;
int main(){
	
	int num;
	
	cout<<"Digite un numero: ";
	cin>>num;
	
	if(num%2){
		cout<<"El numero es impar";
	}else{
		cout<<"El numero es par";
	}
	
	return 0;
}
