#include <iostream>
using namespace std;

int main(){
	
	int bil1,bil2;
	
	cout<<"Mencari Nilai Maksimum dari Dua Bilangan\n\n";
	
	cout<<"Masukkan Bilangan Pertama = ";
	cin>>bil1;
	
	cout<<"Masukkan Bilangan Kedua   = ";
	cin>>bil2;
	
	
	if(bil1>bil2){
		cout<<"Bilangan Terbesar adalah "<<bil1;
	}
	
	else{
		cout<<"Bilangan Terbesar adalah "<<bil2;
			
	}
	
	
	return 0;
}
