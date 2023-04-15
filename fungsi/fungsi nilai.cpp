#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int a,b;
	cout<<"Nilai A="; cin>>a;
	cout<<"Nilai B="; cin>>b;
	cout<<"nilai terbesar antara A dan B="<< fmax(a,b) <<endl; //menentukan nilai max/tertinggi dari 2 variable
	cout<<"nilai terkecil antara A dan B="<< fmin(a,b) <<endl;
	cout<<"A pangkat B ("<<a <<"^"<<b<<")="<< pow(a,b)<<endl;
	cout<<"B pangkat A ("<<b <<"^"<<a<<")="<< pow(b,a)<<endl;
	cout<<"Akar dari " << b << " = "<< sqrt(b)<<endl;
return 0;
}
