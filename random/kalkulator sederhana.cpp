  #include <iostream>
using namespace std;

int main(){
	
	float bil1,bil2;
	int pilihan;
	float hasil;
	string operasi;
	char menu;
	
	
	Start:
	cout<<"Kalkulator Sederhana"<<endl;
	cout<<"Pilih Operator Aritmatika"<<endl;
	cout<<"1. Penjumlahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;
	cout<<"5. Perpangkatan"<<endl;
	cout<<"6. Modulus"<<endl;
	cout<<endl;
	
	cout<<"Masukkan Pilihan Anda: ";
	cin>>pilihan;
	
	cout<<"Masukkan Bilangan Pertama: ";
	cin>>bil1;
	
	cout<<"Masukkan Bilangan Kedua\t: ";
	cin>>bil2;
	
	
	switch(pilihan){
		
		case 1 : hasil=bil1+bil2;
				 operasi='+';
				 break;	
		
		case 2 : hasil=bil1-bil2;
				 operasi='-';
				 break;
		
		case 3 : hasil=bil1*bil2;
				 operasi='*';
				 break;
		
		case 4 : hasil=bil1/bil2;
				 operasi='/';
				 break;
				 
		case 5: hasil=1;
				for(int i=1;i<=bil2;i++)
				{
					hasil *= bil1;
				}
				operasi=" Pangkat ";
				break;
			 
		case 6:	int a,b;
				a=bil1;b=bil2;
				hasil= a%b;
				operasi='%';
				break;
			
		default:
			cout<<"Pilihan Tidak Tersedia"<<endl;
	}
	
	
	cout<<bil1<<operasi<<bil2<<" = "<<hasil;
	cout<<endl<<endl;	
	cout<<"ingin lanjut atau tidak?(y/t?)";
	cin>>menu;
	

	

	if(menu=='y'||menu=='Y'){
		system("CLS");
		goto Start;
	}
	else{
		return 0;
	}

	goto Start;	
	cout<<endl;
	cout<<"thanks";
}
