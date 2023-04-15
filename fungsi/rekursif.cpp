#include<iostream>
using namespace std;

//fungsi rekursif
void ulang(int n){
	// kondisi / stop function
	if(n==0){
		cout<<"\nSelesai";
	}else{
		cout<<"Hello "<<endl;
		ulang(n-1);
	}
}
int main(){
	int a;
	cout<<"Masukkan banyaknya perulangan : ";
	cin>>a;
	cout<<endl;
	ulang(a);
}
