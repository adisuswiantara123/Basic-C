#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int batasBaris, batasKolom, pilihan;
	bool loop = true;
	
	cout<<"Masukan batas baris: ";cin>>batasBaris;
	cout<<"Masukan batas kolom: ";cin>>batasKolom;
	
	int matriks1[batasBaris][batasKolom], matriks2[batasBaris][batasKolom];
	
	cout<<endl<<"Masukan nilai pada matriks 1 "<<batasBaris<<"x"<<batasKolom<<endl;
	for(int i = 0; i<batasBaris; i++){
		for(int j = 0; j<batasKolom; j++){
			cout<<"Nilai matrkis ["<<i<<"]["<<j<<"] :";cin>>matriks1[i][j];
		}
	}
	
	cout<<endl<<"Masukan nilai pada matriks 2 "<<batasBaris<<"x"<<batasKolom<<endl;
	for(int i = 0; i<batasBaris; i++){
		for(int j = 0; j<batasKolom; j++){
			cout<<"Nilai matrkis ["<<i<<"]["<<j<<"] :";cin>>matriks2[i][j];
		}
	}
	
	cout<<endl<<"Matriks 1:"<<endl;
	for(int i = 0; i < batasBaris; i++){
		for(int j = 0; j < batasKolom; j++){
			cout<<setw(3)<<matriks1[i][j]<<"  ";
		}
		cout<<endl;
	}
				
	cout<<endl<<"Matriks 2:"<<endl;
	for(int i = 0; i < batasBaris; i++){
		for(int j = 0; j < batasKolom; j++){
			cout<<setw(3)<<matriks2[i][j]<<"  ";
		}
		cout<<endl;
	}
	
	//system("cls");
	while(loop){
		cout<<"Menu: "<<endl;
		cout<<"1. Penjumlahan"<<endl;
		cout<<"2. Pengurangan"<<endl;
		cout<<"3. Perkalian"<<endl;
		cout<<"4. Keluar"<<endl;
		cout<<"Masukan pilihan: ";cin>>pilihan;
		switch(pilihan){
			case 1:
				cout<<endl<<"Hasil Penjumlahan Matriks:"<<endl;
				for(int i = 0; i < batasBaris; i++){
					for(int j = 0; j < batasKolom; j++){
						cout<<setw(3)<<matriks1[i][j] + matriks2[i][j]<<"  ";
					}
					cout<<endl;
				}
			break;
			
			case 2:
			cout<<endl<<"Hasil Pengurangan Matriks:"<<endl;
			for(int i = 0; i < batasBaris; i++){
				for(int j = 0; j < batasKolom; j++){
					cout<<setw(3)<<matriks1[i][j] - matriks2[i][j]<<"  ";
				}
				cout<<endl;
			}
			break;
			
			case 3:
			cout<<endl<<"Hasil Perkalian Matriks:"<<endl;
			for(int i = 0; i < batasBaris; i++){
				for(int j = 0; j < batasKolom; j++){
					cout<<setw(3)<<matriks1[i][j] * matriks2[i][j]<<"  ";
				}
				cout<<endl;
			}
			break;
			
			case 4: 
				cout<<"Program Selesai..."<<endl;
				loop = false;
				break;
			default:
				cout<<"Pilihan salah! "<<endl<<endl;
				break;
		}
	}
}
