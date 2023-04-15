#include <iostream>
using namespace std;


struct barang{
		string kode;
		string nama;
		int hargabeli;
		int hargajual;
		int stok;
		
};
	    
int main(){
	
	barang str;
	str.kode="123";
	str.nama="Buku Tulis";
	str.hargabeli=1500;
	str.hargajual=2500;
	str.stok=12;
	
	cout<<str.kode<<endl;
	cout<<str.nama<<endl;
	cout<<str.stok<<endl;
	
	
	return 0;
	
	
	
	
	
	
}
