#include <iostream>

using namespace std;

struct mahasiswa{
	string nama;
};

int main(){
	mahasiswa mhs[100];
	int n;
	cout<<"Berapa Banyak mahasiswa = ";
	cin>>n;
	cin.ignore();
	//inputan
	for(int i =0; i<n; i++){
		cout<<"Masukan nama mahasiswa ke-"<<i+1<<" = ";
		getline(cin, mhs[i].nama);
	}
	//output
	cout<<endl;
	for(int i =0; i<n; i++){
		cout<<"Nama mahasiswa ke-"<<i+1<<" = "<<mhs[i].nama;
		cout<<endl;
	}
	
}
