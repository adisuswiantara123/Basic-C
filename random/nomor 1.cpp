#include <iostream>
using namespace std;

int main(){
	
	int bil1,bil2;

	cout<<"MENGECEK 2 NILAI BILANGAN SAMA ATAU TIDAK\n\n";
	
	cout<<"Masukkan Bilangan Pertama \t:";
	cin>>bil1;
	
	cout<<"Masukkan Bilangan Kedua \t:";
	cin>>bil2;
	
	cout<<endl;
	
	if(bil1==bil2){
	cout<<"Kedua Bilangan Sama";		
	}
	
	else{
	cout<<"Kedua Bilangan Tidak Sama";
	}
	
	return 0;
}
