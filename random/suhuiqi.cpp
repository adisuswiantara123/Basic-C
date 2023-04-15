#include<iostream>
using namespace std;

int main(){
	string garis="===============================";
	int a,suhuk,suhu;
	char y;
	
	menu:
		cout<<garis<<endl;
		cout<<"Pilihan suhu\n";
		cout<<"1. Celcius\n";
		cout<<"2. Kelvin\n";
		cout<<"3. Fahrenheit\n";
		cout<<garis<<endl;
		cout<<"Masukkan Pilihan Suhu Awal : ";cin>>a;
		cout<<"Masukkan Suhu Awal : ";cin>>suhu;
		cout<<"Masukkan Pilihan Suhu Akhir : ";cin>>suhuk;
		cout<<endl;
		cout<<garis<<endl;
	
	
			if(a==1){
				if(suhuk==1){
					cout<<"Hasil Konversi suhu "<<suhu;
				}
				else if(suhuk==2){
					cout<<"Hasil Konversi suhu "<<suhu+273;
				}
				else if(suhuk==3){
					cout<<"Hasil Konversi suhu "<<(9*suhu/5)+32;
				}
				else{
				cout<<"Wrong Input!";
				}
			}
			else if(a==2){
				if(suhuk==1){
					cout<<"Hasil Konversi suhu "<<suhu-273;	
				}
				else if(suhuk==2){
					cout<<"Hasil Konversi suhu "<<suhu;
				}
				else if(suhuk==3){
					cout<<"Hasil Konversi suhu "<<(9*(suhu-273)/5)+32;
				}
				else{
				cout<<"Wrong Input!";
				}
			}

			else if(a==3){
				if(suhuk==1){
					cout<<"Hasil Konversi suhu "<<5*(suhu-32)/9;
				}
				else if(suhuk==2){
					cout<<"Hasil Konversi suhu "<<(5*(suhu-32)/9)+273;
				}
				else if(suhuk==3){
					cout<<"Hasil Konversi suhu "<<suhu;
				}
				else{
				cout<<"Wrong Input!";
				}
				
			}
			else{
				cout<<"Wrong Input!";
			}
		cout<<endl;
		cout<<garis<<endl;
		cout<<"\ningin mengulang? (y/n)";cin>>y;
		
		if(y=='y' || y=='Y'){
			system("CLS");
			goto menu;
		}
		else{
			
		}
	
	return 0;
}
