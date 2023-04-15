#include<iostream>

using namespace std;

int tambah(int a, int b){
	return a+b;
}

int kurang(int a, int b){
	int hasil = a - b;
	return hasil;
}

int kali(int a, int b){
	return a*b;
}

int bagi(int a, int b){
	return a/b;
}


void kalkulator(){
	cout <<"PROGRAM KALKULATOR "<<endl;
	cout<<"1. Tambah"<<endl;
	cout<<"2. Kurang"<<endl;
	cout<<"3. Kali"<<endl;
	cout<<"4. Bagi"<<endl;
	int pil;
	
	cout<<"Masukkan Pilihan: ";
	cin>>pil;
	
	int angka1,angka2;
	
	cout<<"Masukkan Angka Pertama: ";
	cin>>angka1;
	
	cout<<"Masukkan Angka Kedua: ";
	cin>>angka2;
	
	
	if(pil==1){
		cout<<"Hasil Tambah: "<<tambah(angka1,angka2);
	}
	
	else if(pil==2){
		cout<<"Hasil Kurang: "<<kurang(angka1,angka2);
	}
	
	else if(pil==3){
		cout<<"Hasil Kali: "<<kali(angka1,angka2);
	}
	
	else if(pil==4){
		cout<<"Hasil bagi: "<<bagi(angka1,angka2);
	}
	
}

int main(){
	kalkulator();
	return 0;
}
