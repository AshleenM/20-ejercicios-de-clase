#include<iostream>
using namespace std;
int main(){
	int a = 0;
	int num;
	cout<<"Ingrese un numero: \n";
	cin>>num;
	while(a<num){
		if(a%2==0){
			cout<<a<<" El numero es par \n";
		}
	a++;
    }
	return 0;
}
