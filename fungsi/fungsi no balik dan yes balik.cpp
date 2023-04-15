#include <iostream>
using namespace std;


void jumlah(){
	float i,a,b,hasil;
	
	cout<<"Masukkan Batas bawah: ";
	cin>>b;
	cout<<"Masukkan Batas Atas: ";
	cin>>a;
	cout<<endl;
	

	for(b;b<=a;b++){
		
		if(b<=a){
		cout<<b;
	}
		if(b!=a){
		cout<<"+";
	}
	
		hasil +=b;
	}
	cout<<" = "<<hasil;
	cout<<endl;
}


int main(){
	cout<<"soal no 2"<<endl;
	
	jumlah();
	cout<<endl;
	
	return 0;
	
}
