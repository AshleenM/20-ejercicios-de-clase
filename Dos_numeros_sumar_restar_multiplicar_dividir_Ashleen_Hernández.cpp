#include<iostream>
using namespace std;
int main(){
	float num1, num2;
	int opcion;
	float resultado;
	cout <<"Ingrese el primer n\xa3mero: \n";
	cin >> num1;
	cout <<"Ingrese el segundo n\xa3mero: \n";
	cin >> num2;
	cout <<"Operaciones matematicas \n ";
	cout <<"\n 1. - Suma";
	cout <<"\n 2. -Resta";
	cout <<"\n 3. -Multiplicacion";
	cout <<"\n 4. -Division \n ";
	cin >>opcion;
	switch (opcion){
		case 1:
		//Realizar la operacion suma
		resultado = num1+ num2;
		cout <<"La suma de los dos numeros es: "<<resultado<<endl;
		break;
		case 2: 
		//Realizar la operacion resta
		resultado = num1- num2;
		cout <<"La resta de los dos numeros es: "<<resultado<<endl;
		break;
		case 3:
		//Realizar la operacion multiplicacion
		resultado = num1* num2;
		cout <<"La multiplicacion de los dos numeros es: "<<resultado<<endl;
		break;
		case 4:
		//Realizar la operacion division
		resultado = num1/ num2;
		cout <<"La division de los dos numeros es: "<<resultado<<endl;
		break;		
	}	
	return 0;
}
