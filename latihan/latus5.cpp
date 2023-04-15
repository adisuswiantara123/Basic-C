#include <iostream>
using namespace std;

int main(){
	
	int a;
	
	
	cout<<"Mengecek angka kelipatan"<<endl;
	
	cout<<"Masukkan angka: ";
	cin>>a;
	
	
	
	if(a%3==0 && a%5 != 0){
	cout<<"Kelipatan 3";	
	}
	
	else if(a%5==0 && a%3 !=0){
		cout<<"Hasil kelipatan 5";
	}
	
	else if(a%3==0 && a%5==0){
		cout<<"Hasil kelipatan 3 dan kelipatan 5";
	}
	
	else{
		cout<<"Bukan kelipatan 5 dan bukan kelipatan 3";
	}
	
	return 0;
}
