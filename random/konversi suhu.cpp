#include <iostream>
using namespace std;

int main(){
		
	int pil1,pil2,n;
	char menu;

	Start:
	cout<<"======================"<<endl;
	cout<<"Konversi Suhu Wal"<<endl;
	cout<<"1. Celcius"<<endl;
	cout<<"2. Reamur"<<endl;
	cout<<"3. Fahrenheit"<<endl;
	cout<<"4. Kelvin"<<endl;
	cout<<"======================"<<endl<<endl;
	cout<<"dipilih cuk: ";
	cin>>pil1;
	
	cout<<"suhu awal: ";
	cin>>n;
	
	cout<<"yang dituju: ";
	cin>>pil2;
	
	
	switch(pil1){
		case 1: 
		if(pil2==1){
		cout<<"hasilnya tu "<<n;
		}
		else if(pil2==2){
			cout<<"hasilnya tu "<< 4/5*n;
		}
		else if(pil2==3){
			cout<<"hasilya tu "<<9/5*n+32;
		}
		else if(pil2==4){
			cout<<"hasilnya tu "<<n+273;
		}
		else{
			cout<<"bebujur milih tu";
		}
		break;
		
		case 2: 
		if(pil2==1){
		cout<<"hasilnya tu "<<5/4*n;
		}
		else if(pil2==2){
			cout<<"hasilnya tu "<<n;
		}
		else if(pil2==3){
			cout<<"hasilya tu "<<9/4*n+32;
		}
		else if(pil2==4){
			cout<<"hasilnya tu "<<5/4*n+273;
		}
		else{
			cout<<"bebujur milih tu";
		}
		break;
		
		case 3: 
		if(pil2==1){
		cout<<"hasilnya tu "<<5/9*(n-32);
		}
		else if(pil2==2){
			cout<<"hasilnya tu "<<4/9*(n-32);
		}
		else if(pil2==3){
			cout<<"hasilya tu "<<n;
		}
		else if(pil2==4){
			cout<<"hasilnya tu "<<5/9*(n-32)+273;
		}
		else{
			cout<<"bebujur milih tu";
		}
		break;
		
		case 4: 
		if(pil2==1){
		cout<<"hasilnya tu "<<n-273;
		}
		else if(pil2==2){
			cout<<"hasilnya tu "<<4/5*(n-273);
		}
		else if(pil2==3){
			cout<<"hasilya tu "<<9/5*(n-273)+273;
		}
		else if(pil2==4){
			cout<<"hasilnya tu "<<n;
		}
		else{
			cout<<"bebujur milih tu";
		}
		break;
		
		default: 
		cout<<"bangke bebujur memilih tu";
		
	}
	cout<<endl;
	cout<<"Handak lanjut apa kd? y/t: ";
	cin>>menu;
	if(menu=='y'){	
	system("CLS");
	goto Start;	
	}
	else if(menu=='t'){
		return 0;
	}
	else{
		cout<<"pilihan tidak tersedia";
	}
	
}
