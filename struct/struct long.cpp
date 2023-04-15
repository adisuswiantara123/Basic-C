#include <iostream>
using namespace std;

struct mahasiswa{
	long long nim;	
	string nama;
	string prodi;
	string alamat;
	int nilai;
};

struct dosen{
	
};

int main(){
	mahasiswa mhs;
	
	cout << "NIM 	: "; cin>>mhs.nim;
	cin.ignore();
	cout << "Nama 	: "; getline(cin,mhs.nama);
	cout << "Prodi 	: "; getline(cin,mhs.prodi);
	cout << "Alamat : "; getline(cin,mhs.alamat);
	cout << "Nilai 	: "; cin>>mhs.nilai;
	
	cout << endl << endl;
	
	cout << "NIM 	: " << mhs.nim << endl;
	cout << "Nama 	: " << mhs.nama << endl;
	cout << "Prodi 	: " << mhs.prodi << endl;
	cout << "Alamat : " << mhs.alamat<< endl;
	cout << "Nilai 	: " << mhs.nilai;
	
}
