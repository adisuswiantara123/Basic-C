#include <iostream>
using namespace std;

int main(){



int a, i;
 
 
cout<<"Masukkan Angka: ";
cin>>a;

for(i=1;i<=a;i++){
	if(i%6==0 && i%7 !=0){   
	cout<<'#'<<",";
	}
	else if(i%7==0 && i%6 !=0){
		
		cout<<'*'<<",";
	}
	else if(i%6==0 && i%7 ==0){
		cout<<"*#"<<",";
		
	}
	else{
	
	cout<<i<<",";
}
	
	}
}

