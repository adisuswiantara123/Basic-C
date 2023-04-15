#include <iostream>
using namespace std;


void jumlah(){
	int up,bottom,hasil;
	
	cout<<"Masukkan Batas bawah: ";
	cin>>bottom;
	cout<<"Masukkan Batas Atas: ";
	cin>>up;
	cout<<endl;
	

	for(bottom;bottom<=up;bottom++){
		
		if(bottom<=up){
		cout<<bottom;
		}
		if(bottom!=up){
		cout<<"+";
		}
	
		hasil +=bottom;
	}
	cout<<" = "<<hasil;
	cout<<endl;
}


int main(){
	cout<<"soal no 2 \n";
	
	jumlah();
//	cout<<endl;
	
	return 0;
	
}
