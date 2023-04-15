#include <iostream>
using namespace std;

int main()
{
	int batas;
	
	cout<<"Masukkan batas data nama : ";
	cin>>batas;
	
	string nama[batas];

	for(int i=0; i<batas; i++)
	{
		cout<<"Memasukkan data nama index ke "<<i<<" : ";
		cin>>nama[i];
	}
	cout<<endl;
	
	for(int i=0; i<batas; i++)
	{
		cout<<nama[i]<<" ";
	}
}
