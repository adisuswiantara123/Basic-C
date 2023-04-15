#include <iostream>
using namespace std;

int main(){
	//Deklarasi batas
	int baris, kolom;
	cout<<"Masukan baris: ";cin>>baris;
	cout<<"Masukan kolom: ";cin>>kolom;
	
	//Inisialisasiin array
	int array1[baris][kolom];
	int array2[baris][kolom];
	
	cout<<"-- Input Array 1 --"<<endl;
	for(int i = 0; i < baris; i++){
		for(int j = 0; j < kolom; j++){
			cout<<"Input Array["<<i<<"]["<<j<<"] : ";
			cin>>array1[i][j];
		}
	}
	
	cout<<"-- Input Array 2 --"<<endl;
	for(int i = 0; i < baris; i++){
		for(int j = 0; j < kolom; j++){
			cout<<"Input Array["<<i<<"]["<<j<<"] : ";
			cin>>array2[i][j];
		}
	}
	
	cout<<endl<<"-- Output Array 1-- "<<endl;;
	for(int i = 0; i < baris; i++){
		for(int j = 0; j < kolom; j++){
			cout<<"Cetak Array["<<i<<"]["<<j<<"] : "
			<<array1[i][j]<<endl;
		}
	}
	
	cout<<endl<<"-- Output Array 2-- "<<endl;;
	for(int i = 0; i < baris; i++){
		for(int j = 0; j < kolom; j++){
			cout<<"Cetak Array["<<i<<"]["<<j<<"] : "
			<<array2[i][j]<<endl;
		}
	}
	
	return 0;
}
