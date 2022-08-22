//Realice un programa que le pida al usuario un numero del 1 al 10 y arroje como resultado la tabla de multiplicar de ese numero.
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	
	int num, i;
	
	do{
	cout<<"digite un numero del 1 al 10: "; cin>>num;
	}while(num<1 || num>10);
	
	for(i=1;i<=10;i++){
		cout<<num<<" * "<<i<<" = "<<num*i<<endl;
	}
	
	system("pause");
	return 0;
}
