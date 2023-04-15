#include<iostream>
#include<conio.h>
using namespace std;

int Luas(int x,int y);
float KLL(int r);
void cetakgaris(int n);

int main(){
	int p=0,l=0;
	float K;
	cout<<"Menghitung Luas Persegi 4"<<endl;
	cout<<endl<<"Masukan Panjang : ";cin>>p;
	cout<<endl<<"Masukan Lebar : ";cin>>l;
	cout<<endl<<"Luas = "<< Luas(p,l);//pemanggilan fungsi
	cetakgaris(20);//pemanggilan fungsi
	cout<<"\n\n";
	cout<<"Menghitung Keliling lingkaran"<<endl;
	cout<<"Masukan jari : ";
	cin>>l;
	K=KLL(l);//pemanggilan fungsi
	cout<<"Keliling Lingkaran = " <<K;
	getch();
}

int Luas(int x,int y){
	int hasil;
	return hasil = x*y;
}

float KLL(int r){
	float keliling,phi=22/7;
	keliling=2*phi*r;
	return keliling;
}

void cetakgaris(int n){
	int i;
	cout<<"\n\n";
	for(i=0;i<=n;i++)
	cout<<"-";cout<<"\n";
}
