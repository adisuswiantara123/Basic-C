#include <iostream>
using namespace std;

struct mahasiswa{
	string nama;
	string nim;
	int array[2];
};

void muncul(mahasiswa mhs){
	cout<<"nama : "<<mhs.nama<<endl;
	cout<<"nim : "<<mhs.nim<<endl;
	for(int i=0 ; i<2;i++){
		cout<<"Nilai matkul ke-"<<i+1<<" = "<<mhs.array[i]<<endl;
	}
}
	
int main(){
	mahasiswa mhs;
	
	cout<<"Masukan nama = ";
	getline(cin, mhs.nama);
	cout<<"Masukan nim = ";
	cin>>mhs.nim;
	for(int i=0 ; i<2;i++){
		cout<<"Masukan Nilai matkul ke-"<<i+1<<" : ";
		cin>>mhs.array[i];
	}
	cout<<endl<<endl;
	muncul(mhs);
}
