#include <iostream>
using namespace std;

int main(){
	char menu,y;
	float a,b,c,d;
	string line="=======================================";

pilihan:	
	cout<<"Menu\n";
	cout<<line<<endl;
	cout<<"1. Konversi dari C ke F \n";
	cout<<"2. Konversi dari C ke K \n";
	cout<<"3. Konversi dari F ke C \n";
	cout<<"4. Konversi dari F ke K \n";
	cout<<"5. Konversi dari K ke C \n";
	cout<<"6. Konversi dari K ke F \n";
	cout<<"0. Keluar\n";
	cout<<line<<endl;
	cout<<"Masukkan pilihan menu : ";cin>>menu;
	if(menu=='0'){
		cout<<line;
		return 0;
	}
	else{
		cout<<"Masukkan batas bawah dan batas atas yang ingin di konversi : ";
		cin>>a>>b;
	}
	
	if(menu=='1'){
		cout<<"\tC \t F"<<endl;
		cout<<"\t-- \t --"<<endl;
		for(a;a<=b;a++){
			cout<<"\t"<<a<<" \t "<<(9*a/5)+32<<endl;
		}	
	}
	
	else if(menu=='2'){
		cout<<"\tC \t K"<<endl;
		cout<<"\t-- \t --"<<endl;
		for(a;a<=b;a++){
			cout<<"\t"<<a<<" \t "<<a+273<<endl;
		}	
	}
	else if(menu=='3'){
		cout<<"\tF \t C"<<endl;
		cout<<"\t-- \t --"<<endl;
		for(a;a<=b;a++){
			cout<<"\t"<<a<<" \t "<<5*(a-32)/9<<endl;
		}	
	}
	else if(menu=='4'){
		cout<<"\tF \t K"<<endl;
		cout<<"\t-- \t --"<<endl;
		for(a;a<=b;a++){
			cout<<"\t"<<a<<" \t "<<(5*(a-32)/9)+273<<endl;
		}	
	}
	else if(menu=='5'){
		cout<<"\tK \t C"<<endl;
		cout<<"\t-- \t --"<<endl;
		for(a;a<=b;a++){
			cout<<"\t"<<a<<" \t "<<a-273<<endl;
		}	
	}
	else if(menu=='6'){
		cout<<"\tK \t F"<<endl;
		cout<<"\t-- \t --"<<endl;
		for(a;a<=b;a++){
			cout<<"\t"<<a<<" \t "<<(9*(a-273)/5)+32<<endl;
		}	
	}
	else{
		cout<<"Wrong Input!!!!"<<endl;
	}
	
	cout<<line<<endl;
	cout<<"Anda Ingin mengulang? (y/n) ";cin>>y;
	if(y=='y' || y=='Y'){
		system("cls");
		goto pilihan;
	}
	else{
		return 0;
	}
	
	return 0;
}
