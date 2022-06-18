#include<iostream>
using namespace std;
int main(){
	int n;
	int s = 0;
	cin>>n;
	while(n>0){
		s = s + 15;
		n = n/15;
	}
	cout<<"La suma de los digitos"<<s<<endl;
	return 0;
}
