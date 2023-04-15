#include <iostream>
using namespace std;

int main(){
	
	string bulan;      
	cout<<"Menentukan Jumlah Hari pada Suatu Bulan"<<endl<<endl;
	
	cout<<"Bulan= ";
	cin>>bulan;
	

	if(bulan=="januari"){
		cout<<"di bulan "<<bulan<<" ada 31 hari";
	}
	
	else if(bulan=="februari"){
		cout<<"di bulan "<<bulan<<" ada 28 hari";
	}
	
	else if(bulan=="maret"){
		cout<<"di bulan "<<bulan<<" ada 31 hari";
	}
	
	else if(bulan=="april"){
		cout<<"di bulan "<<bulan<<" ada 30 hari";
	}
	
	else if(bulan=="mei"){
		cout<<"di bulan "<<bulan<<" ada 31 hari";
	}

	else if(bulan=="juni"){
		cout<<"di bulan "<<bulan<<" ada 30 hari";
	}

	else if(bulan=="juli"){
		cout<<"di bulan "<<bulan<<" ada 31 hari";
	}

	else if(bulan=="agustus"){
		cout<<"di bulan "<<bulan<<" ada 31 hari";
	}

	else if(bulan=="september"){
		cout<<"di bulan "<<bulan<<" ada 30 hari";
	}
	
	else if(bulan=="oktober"){
		cout<<"di bulan "<<bulan<<" ada 31 hari";
	}

	else if(bulan=="november"){
		cout<<"di bulan "<<bulan<<" ada 30 hari";
	}

	else if(bulan=="desember"){
		cout<<"di bulan "<<bulan<<" ada 31 hari";
	}

	else{
		cout<<"Pilihan Tidak Tersedia";
	}

 return 0;
}
