#include <iostream>
using namespace std;

struct barang {
	string nama;
	int harga;
	int qty;
	int total;
};

int main(){
	
	int n;
	cout<<"Masukan jumlah barang yang ingin dibeli: ";cin>>n;
	
	barang brg[n];
	for(int i = 0; i < n; i++){
		cout<<endl<<"-- BARANG KE-"<<i+1<<"  --"<<endl;
		cin.ignore();
		cout<<"Nama Barang   : ";getline(cin, brg[i].nama);
		cout<<"Harga Barang  : ";cin>>brg[i].harga;
		cout<<"Jumlah Barang : ";cin>>brg[i].qty;
		brg[i].total = brg[i].harga * brg[i].qty;
	}
	
	system("pause");
	system("cls");
	
	cout<<"-- OUTPUT --"<<endl;
	for(int i = 0; i < n; i++){
		cout<<endl<<"-- BARANG KE-"<<i+1<<"  --"<<endl;
		cout<<"Nama Barang        : "<<brg[i].nama<<endl;
		cout<<"Harga Barang       : "<<brg[i].harga<<endl;
		cout<<"Jumlah Barang      : "<<brg[i].qty<<endl;
		cout<<"Total Harga Barang : "<<brg[i].total<<endl;
		cout<<"----------------------------\n";
	}
	
	
	
	
}
