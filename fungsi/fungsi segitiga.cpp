#include<iostream>

using namespace std;

int hitungLuas(int a, int t){
	return a*t/2;
}

void display(){
	int alas, tinggi;
	cout << "PROGRAM LUAS SEGITIGA" << endl;
	cout << "Masukkan Alas : ";
	cin >> alas;
	cout << "Masukkan Tinggi : ";
	cin >> tinggi;
	cout << "Hasil Luas : " << hitungLuas(alas, tinggi) << endl;
}

int main(){
	display();
	return 0;
}
