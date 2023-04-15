   #include <iostream>
using namespace std;

int main(){


	char huruf;
	cout<<"Mengecek sebuah huruf/karakter merupakan vokal atau konsonan!"<<endl;
	
	cout<<"Huruf= ";
	cin>>huruf;
	
	cout<<endl;
	if(huruf=='B'||huruf=='C'||huruf=='D'||huruf=='F'||huruf=='G'||huruf=='H'||huruf=='J'||huruf=='K'||huruf=='L'
	||huruf=='M'||huruf=='N'||huruf=='P'||huruf=='Q'||huruf=='R'||huruf=='S'||huruf=='T'||huruf=='V'||huruf=='W'
	||huruf=='X'||huruf=='Y'||huruf=='Z'){
		cout<<"huruf "<<huruf<<" adalah huruf konsonan";
	}
	
	else if(huruf=='A'||huruf=='I'||huruf=='U'||huruf=='E'||huruf=='O'){
		cout<<"huruf "<<huruf<<" adalah huruf vokal";
	}
	
	else{
		cout<<"Pilihan Tidak Tersedia";
	}

		return 0;
}
