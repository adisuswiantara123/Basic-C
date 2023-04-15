#include <iostream>
using namespace std;
int main(){
	int baris,kolom;
	cout<<"Masukkan Batas Baris: ";cin>>baris;
	cout<<"Masukkan Batas Kolom: ";cin>>kolom;
	
	int angka[baris][kolom];
	//int angka2[baris][kolom];
	for (int i=0;i<baris;i++){
		for(int j=0;j<kolom;j++){
			cout<<"Masukkan Angka pada ["<<i<<"]["<<j<<"] = ";
				cin>>angka[i][j];
		}
		cout<<endl;
	}
	for (int i=0;i<baris;i++){
		for(int j=0;j<kolom;j++){
			cout<<" "<<angka[i][j];
		}
		cout<<endl;
	}
}
