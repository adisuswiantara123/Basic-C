#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int batas,i, total = 0;
	cout<<"Masukkan banyak data : ";
	cin>>batas;
	int angka[batas];
	
	for(i=0; i<batas; i++){
		cout<<"Masukkan Nilai ke "<<i+1<<": ";
		cin>>angka[i];
	}
	
	for(i=0; i<batas; i++){
		cout<<"Nilai ke "<<i+1<<": "<<angka[i]<<endl;
		total += angka[i]; // += unary
	}
	cout<<"\nJumlah Total Nilai = "<<total;
}

