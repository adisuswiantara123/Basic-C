#include <iostream>

using namespace std;

void tambah(int *a,int *b,int *c){
	*c=*a+*b;
}

void kurang(int *a,int *b,int *c){
	*c=*a - *b;
}

void kali(int *a,int *b,int *c){
	*c=*a * *b;
}

void bagi(int *a,int *b,int *c){
	*c=*a / *b;
}

void display(){
	int choi;
	int a,b,c;
	bool loop= true;
	
	while(loop){
	cout<<"\nPROGRAM KALKULATOR"<<endl;
	cout<<"1. Tambah"<<endl;
	cout<<"2. Kurang"<<endl;
	cout<<"3. Kali"<<endl;
	cout<<"4. Bagi"<<endl;
	cout<<"5. Keluar"<<endl;
	
	cout<<"Masukkan Pilihan: ";
	cin>>choi;
	
	
	switch(choi){
		case 1:
			cout<<"Masukkan Angka Pertama  : ";cin>>a;
			cout<<"Masukkan Angka Kedua    : ";cin>>b;
			c=0;
			tambah(&a,&b,&c);
			cout<<"Hasil Tambah: "<<c<<endl;
			system("pause");
			break;
		case 2:
			cout<<"Masukkan Angka Pertama  : ";cin>>a;
			cout<<"Masukkan Angka Kedua    : ";cin>>b;
			c=0;
			kurang(&a,&b,&c);
			cout<<"Hasil Kurang: "<<c<<endl;
			system("pause");
			break;
		case 3:
			cout<<"Masukkan Angka Pertama  : ";cin>>a;
			cout<<"Masukkan Angka Kedua    : ";cin>>b;
			c=1;
			kali(&a,&b,&c);
			cout<<"Hasil Kali: "<<c<<endl;
			system("pause");
			break;
		case 4:
			cout<<"Masukkan Angka Pertama  : ";cin>>a;
			cout<<"Masukkan Angka Kedua    : ";cin>>b;
			c=1;
			bagi(&a,&b,&c);
			cout<<"Hasil bagi: "<<c<<endl;
			system("pause");
			break;
		case 5:
			cout<<"Keluar"<<endl;
			loop=false;
			break;
			
			
		default:
			cout<<"INPUTAN SALAH"<<endl;
			cout<<"ULANGI"<<endl;
			system("pause");
			break;
	}
	system("cls");
		
		
	}
	
}

int main(){
	display();
}
