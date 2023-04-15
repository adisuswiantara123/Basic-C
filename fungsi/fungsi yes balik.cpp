#include <iostream>
using namespace std;


int deret(int bottom,int up){
	
	int hasil;
	
	cout<<"soal no 2 fungsi return"<<endl;
	cout<<"Masukkan Batas Bawah: ";
	cin>>bottom;
	cout<<"Masukkan Batas Atas: ";
	cin>>up;
	
	
	for(bottom;bottom<=up;bottom++){
		
		if(bottom<=up){
		cout<<bottom;
	}
		if(bottom!=up){
		cout<<"+";
	}
	
		hasil +=bottom;
	}
	return hasil;
	
}

int main(){
	int x,y;
	int jumlah;
	
	jumlah=deret(x,y);
	cout<<" = "<<jumlah;
	cout<<endl;
	
	
	return 0;
}
