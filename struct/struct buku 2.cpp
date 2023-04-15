#include <iostream>
using namespace std;
struct buku{
char kode[30], judul[30], penulis[30], penerbit[30];
int  harga;
};

main(){
	
int n;
cout<<"Masukkan Jumlah Buku: ";
cin>>n;
cout<<endl;
buku m[n];
for (int i=0; i<n; i++)
{
cout<<"Masukkan kode : ";
cin.getline(m[i].kode, 30);
cout<<"Masukkan Judul Buku : ";
cin.getline(m[i].judul, 30);
cout<<"Masukan Penulis : ";
cin.getline(m[i].penulis, 30);
cout<<"Masukan Penerbit : ";
cin>>m[i].penerbit;
cout<<"Masukan Harga : ";
cin>>m[i].harga;
cout<<"\n";
}

for (int i=0; i<n; i++){
	
cout<<"Kode: "<<m[i].kode<<endl;
cout<<"Judul Buku: "<<m[i].judul<<endl;
cout<<"Penulis: "<<m[i].penulis<<endl;
cout<<"Penerbit: "<<m[i].penerbit<<endl;
cout<<"Harga: "<<m[i].harga<<endl;
}
return 0;
}