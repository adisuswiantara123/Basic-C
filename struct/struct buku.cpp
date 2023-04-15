#include <iostream>
using namespace std;

struct buku{
	
	char kode[15], judul[50], penulis[20], penerbit[20];
	int harga;
	
	
	
	
};

int main(){
	
	
	
	int n;
	cout<<"Masukkan Jumlah Buku: ";
	cin>>n;
	buku str[n];
	for(int i=0; i<n;i++){
		cin.ignore();
		cout<<"Masukkan Kode Buku: ";
		cin.getline(str[i].kode,15);
		cout<<"Masukkan Judul Buku: ";
		cin.getline(str[i].judul,50);
		cout<<"Masukkan Penulis Buku: ";
		cin.getline(str[i].penulis,20);
		cout<<"Masukkan Penerbit Buku: ";
		cin.getline(str[i].penerbit,20);
		cout<<"Masukkan Harga Buku: ";
		cin>>str[i].harga;
		
		cout<<endl;
		
	}
	
	cout<<"Hasil Output"<<endl;
	for(int i=0; i<n;i++){
		
		cout<<endl;
		cout<<"Kode Buku: "<<str[i].kode<<endl;
		cout<<"Judul Buku: "<<str[i].judul<<endl;
		cout<<"Penulis: "<<str[i].penulis<<endl;
		cout<<"Penerbit: "<<str[i].penerbit<<endl;
		cout<<"Harga Buku: "<<str[i].harga<<endl;
	}
	
	
}