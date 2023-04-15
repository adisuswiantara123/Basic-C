#include <iostream>
using namespace std;

int main(){


	int x;
	string hari;
	
	cout<<"Pilih hari ke= ";
	cin>>x;
	
	if(x==1){cout<<"Senin";}
	else if(x==2){cout<<"Selasa";}
	else if(x==3){cout<<"Rabu";}
	else if(x==4){cout<<"Kamis";}
	else if(x==5){cout<<"Jumat";}
	else if(x==6){cout<<"Sabtu";}
	else if(x==7){cout<<"minggu";}
	else{cout<<"Pilihan tidak ada";}
return 0;
}
