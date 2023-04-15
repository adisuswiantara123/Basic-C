#include <iostream>
using namespace std;

int main(){
	
	int a,b,c;
	
	cout<<"Menentukan Jenis Segitiga"<<endl;
	
	cout<<"sisi pertama= ";
	cin>>a;
	
	cout<<"sisi kedua= ";
	cin>>b;
	
	cout<<"sisi ketiga= ";
	cin>>c;
	
	
	if(a==c && b==c && c==a){
		cout<<"segitiga sama sisi";
	}
	
	else if(a==b || b==c ||c==a){
		cout<<"segitiga sama kaki";
	}
	
	else if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b )
	{
		cout<<"segitiga siku-siku";
		//contoh sisi a= 50, sisi b=40, sisi c=30
	}
	
	else{
		cout<<"segitiga sembarang";
	}
	
	return 0;
	
	
	
	
	
	
	
}
