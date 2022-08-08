//comprobar si un numero digitado por el usuario es positivo o negativo.
#include<iostream>
using namespace std;
int main(){
	
	int num;
	cout<<"Digite un numero: "; cin>>num;
	
	if(num<0){
		cout<<"\nEl numero es negativo";
	}else if(num>0){
		cout<<"\nEl numero es positivo";
	}else{
		cout<<"\nEl numero es 0";
	}
	
	return 0;
}
