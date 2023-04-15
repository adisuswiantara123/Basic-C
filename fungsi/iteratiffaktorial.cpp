#include<iostream>

using namespace std;

int main(){
	int angka, batas;
	cout << "Masukkan Angka : ";
	cin >> angka;
	batas = angka;
	int hasil = 1;
	for(int i=0;i<batas;i++){
		if(i==batas-1){
			cout << angka << endl;	
		}else{
			cout << angka << "*";	
		}
		hasil *= angka;
		angka--;
	}
	cout << "Hasil Faktorial " << batas << " : " << hasil << endl;
}
