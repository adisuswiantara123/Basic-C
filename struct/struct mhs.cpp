#include <iostream>
using namespace std;
struct mahasiswa
{
    char nim [15];
    char nama [50];
    char alamat [40];
    int umur;
};
 
int main()
{
    mahasiswa mhs;
     
    cout<<"Contoh Program Struct Data Mahasiswa"<<endl;
    cout<<"Nim: Isi NIM Kalian"<<endl;
    cout<<"Nama: Isi Nama Kalian"<<endl;
    cout<<"========================="<<endl;
     
    cout<<"NIM : ";cin.getline(mhs.nim,15);
    cout<<"Nama : ";cin.getline(mhs.nama,50);
    cout<<"Alamat : ";cin.getline(mhs.alamat,40);
    cout<<"Umur : ";cin>>mhs.umur;
     
    cout<<"\nOutput Hasil \n";
    cout<<"========================="<<endl;
    cout<<"\nNIM : "<< mhs.nim<<endl;
    cout<<"Nama : "<< mhs.nama<<endl;
    cout<<"Alamat : "<< mhs.alamat<<endl;
    cout<<"Umur : "<< mhs.umur<<endl;
     
    return 0;
}