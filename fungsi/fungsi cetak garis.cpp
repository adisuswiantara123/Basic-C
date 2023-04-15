#include<iostream> 
#include<conio.h>
using namespace std;
/* fungsi untuk mencetak garis dgn panjang n karakter */ 
void cetakgaris(int n) { 
	int i; 
	for(i=0;i<n;i++) {
		cout<<"-"; 		
	}
	cout<<endl;
} 
int main() {
	cetakgaris(20);
	cout<<"1. Hello!!"<<endl;
	cetakgaris(15);
	getch();//pemanggilan fungsi getch();
 }
