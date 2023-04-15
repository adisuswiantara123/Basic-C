#include<iostream>

using namespace std;

void nilai(int *a){
	*a += 2;
}

int tambah(int *x, int *y, int *z){
	return *z = *x + *y;
}

int main(){
	int c = 5;
	cout << "INI NILAI AWAL  : " << c<<endl;
	nilai(&c);
	cout << "INI NILAI AKHIR : " << c << endl;

	int g;
	int f;
	int k;
	cout << "Masukkan Bilangan Pertama : ";
	cin >> g;
	cout << "Masukkan Bilanmgan Kedua  : ";
	cin >> f;
	tambah(&f, &g, &k);
	cout << "BILANGAN1 + BILANGAN2 = " << k << endl;
	
	return 0;
}
