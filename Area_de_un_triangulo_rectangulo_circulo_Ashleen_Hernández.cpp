/*Desarrolla un programa que se muestre un menu
que sea
1.Encontrar el area de un triangulo
2.Encontrar el area de un rectángulo
3.Encontrar el area del circulo
4.Salir*/
#include<iostream>
using namespace std;
int main(){
	int opcion;
	cout <<"Seleccione la ecuacion que desea encontrar el area";
	cout <<"\n 1.Area del triangulo \n 2.Area del rectangulo \n 3.Area de un circulo \n";
	cin >> opcion;
	switch (opcion){
		
	case 1:
		float base, altura; 
		float area;
		cout <<"Ingrese la base del triangulo \n";
		cin >>base;
		cout <<"Ingrese la altura del triangulo \n";
		cin >> altura;
		area = (base*altura)/2;
		cout <<"La area del triangulo \n"<<area<<endl;
		break;
		
		case 2: 
		float base2, altura2;
		float area2;
		cout <<"Ingrese la base del rectangulo \n";
		cin >>base2; 
		cout <<"Ingrese la altura del rectangulo \n";
		cin >>altura2;
		area2 = (base2*altura2);
		cout <<"El area del rectangulo es: \n"<<area2<<endl;
		break;
		
		case 3:
			float radio3, area3;
		    float pi = 3.14;
			cout <<"Ingrese la radio del circulo \n";
			cin >> radio3;
			area3 = (pi*radio3*radio3);
			cout <<"El area del circulo es: \n"<<area3<<endl;
			break;
						
	}	
	return 0;
}
