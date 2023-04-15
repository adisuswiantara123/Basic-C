#include <iostream>
using namespace std;

int main(){
	
	int a;
	int *ptr_a;
	ptr_a = &a;
	a = 5;

	cout << "Nilai Variable a : " << a << endl;
	cout << "Alamat Variable a : " << &a << endl;
	
	a=20;
	
	cout << "Alamat Variable Pointer ptr_a : " << ptr_a << endl;
	cout << "Nilai Variable Pointer ptr_a : " << *ptr_a << endl;
	return 0;
}
