#include <iostream>
using namespace std;

int main(){
	
	int x;
	string hari;
	
	
	cout<<"pilih hari ke= ";
	cin>>x;
	
	switch(x){
		case 1 : hari="Senin"; break;
		case 2 : hari="Selasa"; break;
		case 3 : hari="Rabu"; break;
		case 4 : hari="Kamis"; break;
		case 5 : hari="jumat"; break;
		case 6 : hari="Sabtu"; break;
		case 7 : hari="Minggu"; break;
		default: hari="Pilihan tidak ada";
	}
	cout<<hari;
return 0;	
}
