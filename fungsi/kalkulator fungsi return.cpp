#include <iostream>
using namespace std;

float penjumlahan(float a,float b){
	return a+b;
}

float perkalian(float a, float b){
	return a*b;
}

float pembagian(float a,float b){
	return a/b;
}

float pengurangan(float a,float b){
	return a-b;
}

int main(){
	
	float a,b;
	int pilihan;
	
	cout<<"Program C++ Kalkulator dengan Fungsi"<<endl;
	cout<<"------www.kelasprogrammer.com-------"<<endl;
	
	cout<<"\n\nPILIH OPERASI\n1.Penjumlahan\n2.Perkalian\n3.Pembagian\n4.Pengurangan\n\nMasukan Pilihan = ";
	cin>>pilihan;
	cout<<endl;
	
	if (pilihan>=1 && pilihan<=4){
		
		cout<<"Masukan bilangan pertama : ";
		cin>>a;
		
		cout<<"Masukan bilangan kedua   : ";
		cin>>b;
		cout<<endl;
		switch(pilihan){
			case 1 : cout<<a<<" + "<<b<<" = "<<penjumlahan(a,b); break;
			case 2 : cout<<a<<" x "<<b<<" = "<<perkalian(a,b); break;
			case 3 : cout<<a<<" / "<<b<<" = "<<pembagian(a,b); break;
			case 4 : cout<<a<<" - "<<b<<" = "<<pengurangan(a,b); break;
		}
	}else {
		cout<<"Salah memasukan pilihan"<<endl;
	}
	
	return 0;
	
}
