#include<iostream>
using namespace std;

int main()
{
	int batas;
	
	cout<<"Jumlah data yang ingin dimasukkan : ";
	cin>> batas;
	//int id[6] = {1,4,3,2,5,6};
	string nama[batas];
	
	for (int i=0; i<batas; i++){
		cout<<"Masukkan data ke-"<<i+1<<" : ";
		cin>>nama[i];
	}
	cout<<endl;
	cout<<"Isi data : \n";	
	for (int i=0; i<batas; i++){
		cout<<"Data ke-"<<i+1<<" adalah "<<nama[i]<<endl;
	}

}
