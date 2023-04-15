#include <iostream>
using namespace std;

int faktorial(int n){
	int nilai = n;
	if (n == 1){
		cout << n << endl;
		return nilai; //fungsi akan berhenti
	}
	else {
		cout << n << "+";
		return nilai + faktorial(n - 1); //rekursif akan memanggil
										//fungsi kembali
	}
}
int main(){
	int n;
	cout<<"Masukan Jumlah Baris = "; cin>>n;
	cout<< faktorial(n) <<endl;
	return 0;
}



