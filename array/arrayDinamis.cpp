#include<iostream>
using namespace std;

int main()
{
	int batas;
	//memasukkan batas data(untuk perulangan)
	cout<<"Jumlah data yang ingin dimasukkan : ";
	cin>> batas;
	
	int array[batas];
	//perulangan untuk input	
	for (int i=0; i<batas; i++){
		cout<<"Masukkan data angka ke "<<i+1<<" : ";
		cin>>array[i];
	}
	cout<<endl;

	cout<<"Isi data array : \n";
	//perulangan untuk output	
	for (int i=0; i<batas; i++){
		cout<<"Data ke-"<<i+1<<" = "<<array[i]<<endl;
	}
	
}
