#include<iostream>

using namespace std;

int pangkat(int a, int b) {
	if (b==1){
		return a;
	}else {
		return a * pangkat (a,b-1);
	}
}


void input(){
	int x,y,hsl;
	cout<<"Nilai X = "; cin>>x;
	cout<<"Nilai Y = "; cin>>y;
	hsl = pangkat(x,y);
	cout<<x <<" Pangkat " << y <<" = " <<hsl;
}


int main (){
	input();
}
