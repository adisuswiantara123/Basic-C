#include <iostream>
using namespace std;


int main(){
	
	int n,jam,menit,detik;
	
	cout<<"masukkan detik: ";
	cin>>n;
	
	jam=n/3600;
	menit=(n%3600)/60;
	detik= (n%3600) % 60;
	
	cout<<"hasilnya adalah "<<jam<<" jam"<<" "<<menit<<" menit"<<" "<<detik<<"     detik";
	
	
	
	
	
}
