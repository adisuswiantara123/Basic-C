#include <iostream>
using namespace std;

int main(){
	
	cout<<"Menentukan Nama Bulan Masehi"<<endl<<endl;
	
	int bulan;
	
	cout<<"Bulan Ke= ";
	cin>>bulan;
	
	switch(bulan){
		
		case 1:
		cout<<"Bulan Ke-1 adalah Bulan Januari";
		break;
		
		case 2:
		cout<<"Bulan Ke-2 adalah Bulan Februari";
		break;
		
		case 3:
		cout<<"Bulan Ke-3 adalah Bulan Maret ";
		break;
		
		case 4:
		cout<<"Bulan Ke-4 adalah Bulan April";
		break;
		
		case 5:
		cout<<"Bulan Ke-5 adalah Bulan Mei";
		break;
		
		case 6:
		cout<<"Bulan Ke-6 adalah Bulan Juni";
		break;
		
		case 7:
		cout<<"Bulan Ke-7 adalah Bulan Juli";
		break;
		
		case 8:
		cout<<"Bulan Ke-8 adalah Bulan Agustus";
		break;
		
		case 9:
		cout<<"Bulan Ke-9 adalah Bulan September";
		break;
		
		case 10:
		cout<<"Bulan Ke-10 adalah Bulan Oktober";
		break;
		
		case 11:
		cout<<"Bulan Ke-11 adalah Bulan November";
		break;
		
		case 12:
		cout<<"Bulan Ke-12 adalah Bulan Desember";
		break;
		
		default:
		cout<<"Pilihan Tidak tersedia";
	}
	
	
	cout<<endl;
	
	return 0;
	
}
