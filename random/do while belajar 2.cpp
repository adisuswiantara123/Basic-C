#include <iostream>
using namespace std;

int main(){
	
	float up,bottom,hasil,i;
	int pil1;
	string pil2;
	
	do{
	
	Start:
	cout<<"PILIHAN MENU: "<<endl;
	cout<<"1. Konversi dari C ke F"<<endl;
	cout<<"2. Konversi dari C ke K"<<endl;
	cout<<"3. Konversi dari F ke C"<<endl;
	cout<<"4. Konversi dari F ke K"<<endl;
	cout<<"5. Konversi dari K ke C"<<endl;
	cout<<"6. Konversi dari K ke F"<<endl;
	cout<<"0. Keluar dari Menu"<<endl;
	
	cout<<"Masukkan pilihan menu: ";
	cin>>pil1;
	
	if(pil1==0)
		{
		return 0;	
		}
		
	else if (pil1 >=7 || pil1 <0)
		{
		cout<<"Masukkan input dengan benar";
		return 0;
		} 
		
	cout<<"masukkan batas atas: ";
	cin>>up;
	
	cout<<"Masukkan batas bawah: ";
	cin>>bottom;
	

		switch(pil1)
		{
		
		case 1: 
		cout<<"C\t"<<"F"<<endl;
		for(;up<=bottom;up++) 
		{
			
			hasil= 9*(up/5)+32;
		cout<<up<<" \t "<<hasil<<endl;    

		}
		break;
		
		case 2:
		cout<<"C\t"<<"K"<<endl;
		for(up;up<=bottom;up++) 
		{
			hasil=up+273;
			cout<<up<<"\t"<<hasil<<endl;
		}
		break;
		
		case 3:
		cout<<"F\t"<<"C"<<endl;
		for(up;up<=bottom;up++) 
		{
			hasil=5*(up-32)/9;
			cout<<up<<"\t"<<hasil<<endl;
		}
		break;
		
		case 4:
		cout<<"F\t"<<"K"<<endl;
		for(up;up<=bottom;up++) 
		{
			hasil=(5*(up-32)/9)+273;
			cout<<up<<"\t"<<hasil<<endl;
		}
		break;
		
		case 5:
		cout<<"K\t"<<"C"<<endl;
		for(up;up<=bottom;up++) 
		{
			hasil=up-273;
			cout<<up<<"\t"<<hasil<<endl;
		}
		break;
		
		case 6:
		cout<<"K\t"<<"F"<<endl;
		for(up;up<=bottom;up++) 
		{
			hasil=9*(up-273)/5+32;
			cout<<up<<"\t"<<hasil<<endl;
		}
		break;
		
		default:
			cout<<"Masukkan data yang benar";
		
	}
	
	
	cout<<"ingin mengulang? \n 1.Ya \n 2.Tidak \n  ";
	cin>>pil2;
	
}
	while(pil2 =="Ya"&& system("CLS")|| pil2=="ya"&& system("CLS"));
	goto Start;
	system("CLS");
		
}
