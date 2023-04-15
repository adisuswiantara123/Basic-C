#include <iostream>
using namespace std;

int main(){
	
	int i;
	int pin=1234;
	
	cout<<"ATM ni bos"<<endl;
	
	
	do{
	
	cout<<"silahkan masukan pin dengan benar: ";
	cin>>pin;
	
	if(pin==1234){
		
		cout<<"Menu Utama ATM"<<endl;
		cout<<"1. Pembayaran"<<endl;
		cout<<"2. Setor Tunai"<<endl;
		cout<<"3. I Love You"<<endl;
		return 0;
	}
	else{
		cout<<"PIN yang Anda masukkan salah"<<endl;
		i +=1;
	}
}
	while(i<=3);
	cout<<"Anda diblokir"<<endl;
	
	
}
