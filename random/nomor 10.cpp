#include <iostream>
using namespace std;

int main(){
	
	int kwh,hasil,tambahan      ;
	
	cout<<"TOTAL TAGIHAN LISTRIK"<<endl;
	
	cout<<"Masukkan besar Kwh yang Anda gunakan: ";
	cin>>kwh;
	
	
	if(kwh>0 && kwh <= 50){
		hasil=kwh*1100;
		cout<<"Total Tagihan Anda adalah sebesar "<<" Rp."<<hasil;
		
	}
	
	else if(kwh>50 && kwh <= 150){
		hasil=kwh*1200;
		cout<<"Total Tagihan Anda adalah sebesar "<<" Rp."<<hasil;
	}
	
	else if(kwh>150 && kwh <= 250){
		hasil=kwh*1300;
		cout<<"Total Tagihan Anda adalah sebesar "<<" Rp."<<hasil;
	}
	
	else{
		
		hasil= kwh*1500;
		tambahan= hasil + hasil*5/100;
		
		cout<<"Total Tagihan Anda adalah sebesar "<<" Rp."<<tambahan;
	}
	
	
	
	return 0;
	
	
	
	
}
