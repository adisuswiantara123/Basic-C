#include <iostream>
using namespace std;

void pangkat(int *a, int *b, int *c){
	
	for(int i = 0; i < *b; i++)
		*c *= *a;
		
}

int main(){
	int x, y, z = 1;
	cout<<"Masukan angka   : ";cin>>x;
	cout<<"Masukan pangkat : ";cin>>y;
	cout<<"----------------------------"<<endl;
	cout<<"Hasil Sebelum : "<<z<<endl;
	pangkat(&x, &y, &z);
	cout<<"Hasil Sesudah : "<<z<<endl;
}
