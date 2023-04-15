#include <iostream>

using namespace std;

//Pendeklasarian Struct
struct mahasiswa{
	string nim;
	string nama;
	float ipk;
	char kelas;
};

int main(){
	//Penginisialisasi Struct
	mahasiswa mhs;
	
	cout<<"Nim = ";
	cin>>mhs.nim;
	cout<<"Nama = ";
	cin.ignore();
	getline(cin, mhs.nama);
	cout<<"IPK = ";
	cin>>mhs.ipk;
	cout<<"Kelas = ";
	cin>> mhs.kelas;
	
	cout<<endl;
	cout<<"Nim Saya "<<mhs.nim<<endl;
	cout<<"Nama Saya "<<mhs.nama<<endl;
	cout<<"IPK Saya "<<mhs.ipk<<endl;
	cout<<"Kelas Saya "<<mhs.kelas<<endl;
		
}
