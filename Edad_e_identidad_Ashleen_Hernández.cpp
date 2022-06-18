#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
	string name;
	int edad;
	string identidad;
	cout<<"Ingrese el nombre:"<<endl;
	cin>>name;
	cout<<"Ingrese la edad:"<<endl;
	cin>>edad;
	cout<<"Ingrese su identidad :"<<endl;
	cin>>identidad;
	if(edad>=8)
	{cout <<"Es mayor de edad"<<endl;
	}else
	{cout <<"Es menor de edad"<<endl;
	}
	return 0;
}
