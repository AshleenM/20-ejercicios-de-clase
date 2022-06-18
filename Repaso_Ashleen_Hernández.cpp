#include<iostream>
using namespace std;
int main(){
	int opcion;
	cout <<"Seleccione la conversion que desea realizar  \n";
	cout<<"1. Gb a Mb \n";
	cout<<"2. Mb a Kb \n";
	cout <<"3. Kb a byte \n";
	cout<<"4. Salir \n";
	cin >> opcion;
	switch (opcion){ 
		case 1:
			int gb, producto1;
			cout << "Haz seleccionado Gb a Mb, Ingrese los Gb a Mb \n ";
			cin >> gb;
			producto1 = gb *1024;
			cout <<"El resultado en Mb es: "<<producto1<<"Mb \n";
			break;
			
			case 2:
			int mb, producto2;
			cout << "Haz seleccionado Mb a Kb, Ingrese los Mb a Kb \n ";
			cin >> mb;
			producto1 = mb *1024;
			cout <<"El resultado en Kb es: "<<producto1<<"Kb \n";
			break;
			
			case 3:
			int kb, producto3;
			cout << "Haz seleccionado Kb a Byte, Ingrese los Kb a Byte \n ";
			cin >> kb;
			producto1 = kb *1000;
			cout <<"El resultado en Byte es: "<<producto1<<"Byte \n";
			break;
	}
	
} 
