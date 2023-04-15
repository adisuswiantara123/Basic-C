#include <iostream>
using namespace std;

void swap(int a,int b){
	cout<<&a<<endl;
	cout<<&b<<endl;
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int main(){
	
	int a, b;
	
	cout<<"Masukan nilai A: ";cin>>a;
	cout<<"Masukan nilai B: ";cin>>b;
	
	system("puase");
	system("cls");
	
	cout<<"Nilai A Sebelum Di SWAP: "<<a<<endl;
	cout<<"Nilai B Sebelum Di SWAP: "<<b<<endl;
	cout<<"Alamat memori A Sebelum Di SWAP: "<<&a<<endl;
	cout<<"Alamat memori B Sebelum Di SWAP: "<<&b<<endl;
	
	swap(a,b);
	
	cout<<"\nNilai A Sesudah Di SWAP: "<<a<<endl;
	cout<<"Nilai B Sesudah Di SWAP: "<<b<<endl;
	cout<<"Alamat memori A Sebelum Di SWAP: "<<&a<<endl;
	cout<<"Alamat memori B Sebelum Di SWAP: "<<&b<<endl;
	
}
