#include<iostream>
using namespace std;
int main (){
	char l;
	cout << "Ingrese una letra : \n ";	
	cin >> l;
	switch(l){
	case 'a':
		cout << "\n VOCAL"; break;		
	case 'e':
		cout << "\n VOCAL"; break;		
	case 'i':
		cout << "\n VOCAL"; break;		
	case 'o':
		cout << "\n VOCAL"; break;		
	case 'u':
		cout << "\n VOCAL"; break;		
	default:		
		cout << "\n CONSONANTE";
	}
	return 0;
}
