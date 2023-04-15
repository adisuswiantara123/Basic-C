              #include <iostream>
using namespace std;

int main(){
	
	int a,b,c;
	
	cout<<"mengecek apakah panjang masing-masing sisi segitiga valid atau tidak!"<<endl;
	
	cout<<"sisi pertama= ";
	cin>>a;
	
	cout<<"sisi kedua= ";
	cin>>b;
	
	cout<<"sisi ketiga= ";
	cin>>c;
	
	
	if((a+b>c)&&(a+c>b)&&(b+c>a)){
		cout<<"segitiga tersebut valid";
		
		
	}
	
	else{
		cout<<"segitiga tersebut tidak valid";
	}
	
	return 0;
}
