//#include<iostream>
//#include<string.h>
//#include<conio.h>
//using namespace std;
//struct mahasiswa
//{
//char nama[20];
//int id;
//};
//void display(mahasiswa s1)
//{
//cout<<"Nama : "<<s1.nama<<endl;
//cout<<"ID : "<<s1.id;
//}
//int main()
//{
//mahasiswa mhs;
//strcpy(mhs.nama, "Adi"); //inisialisasi variabel
//mhs.id=123456;
//display(mhs);
//getch();
//}


//#include<iostream>
//#include<string.h>
//#include<conio.h>
//using namespace std;
//
//struct mahasiswa
//{
//char nama[20];
//int id;
//};
//struct mahasiswa read(); //fungsi prototype
//int main()
//{
//struct mahasiswa mhs;
//mhs=read(); //memanggil fungsi read
//cout<<"Nama: "<<mhs.nama;
//cout<<"\nID: "<<mhs.id;
//getch();
//}
//struct mahasiswa read()
//{
//struct mahasiswa s1;
//cout<<"Masukkan nama : ";
//cin>>s1.nama;
//cout<<"Masukkan ID : ";
//cin>>s1.id;
//cout<<endl;
//return s1;
//}

//
//#include<iostream>
//#include<string.h>
//#include<conio.h>
//using namespace std;
//struct nilai
//{
//int nim;
//int nilai;
//};
//nilai masuk ()
//{
//nilai n;
//cout<<"Masukkan NIM : ";
//cin>>n.nim;
//cout<<"Masukkan Nilai : ";
//cin>>n.nilai;
//return n;
//}
//void tampil(nilai nil)
//{
//cout<<"====================="<<endl;
//cout<<"NIM : "<<nil.nim<<endl;
//cout<<"Nilai : "<<nil.nilai<<endl;
//}
//main()
//{
//nilai Nile;
//Nile=masuk();
//tampil(Nile);
//getch;
//}


//#include <iostream>
//using namespace std;
//struct mhs{
//char nama[30];
//int nim, uts, uas, nilai;
//};
//main()
//{
//int n;
//cout<<"Masukkan Jumlah Mahasiswa: ";
//cin>>n;
//mhs m[n];
//for (int i=0; i<n; i++)
//{
//cout<<"Masukkan Nama : ";
//cin>>m[i].nama;
//cout<<"Masukkan Nim : ";
//cin>>m[i].nim;
//cout<<"Masukan Nilai UTS : ";
//cin>>m[i].uts;
//cout<<"Masukan Nilai UAS : ";
//cin>>m[i].uas;
//cout<<"\n";
//}
//for (int i=0; i<n; i++)
//{
//m[i].nilai=(m[i].uas+m[i].uts)/2;
//cout<<"Nama : "<<m[i].nama<<endl;
//cout<<"Nim : "<<m[i].nim<<endl;
//
//
//cout<<"Nilai Akhir : "<<m[i].nilai<<endl<<endl;
//}
//return 0;
//}


#include <iostream>
using namespace std;
int main()
{
struct biodata
{
// tipe data dan variabel dikumpulkan disini
char nama[30], hobi[40], asal[20], sekolah[30];
int umur, status;
};
biodata bio;
// Input menggunakan struct
cout << "Masukan nama anda : ";
cin.getline(bio.nama, 30);
cout << "Masukan hobi anda : ";
cin.getline(bio.hobi, 40);
cout << "Masukan umur anda : ";
cin >> bio.umur;
cout << "Masukan kota asal anda : ";
cin >> bio.asal;
cout << "Masukan sekolah anda : ";
cin >> bio.sekolah;
cout << "Masukan status anda (1 apabila single, 2 apabila double): ";
cin >> bio.status;
// output menggunakan struct
cout<<"\nData Kamu"<<endl;
cout<<"==========="<<endl;
cout<<"Nama saya "<<bio.nama<<". "<<endl;
cout<<"Hobi saya adalah "<<bio.hobi<<". "<<endl;
cout<<"Saya berusia "<<bio.umur<<" tahun. "<<endl;
cout<<"Saya berasal dari kota "<<bio.asal<<". "<<endl;
if (bio.status==1)
{
cout<<"Saat ini saya masih single :(";
}
else
{
cout<<"Maaf, sudah ada yang punya :)";

}
return 0;
}