#include <iostream>
using namespace std;

int main(){
	
	int i,j,n;
	
	cout<<"Masukkan batas: ";
	cin>>n;
	
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(j==i)
			{cout<<j;}
			
			else
			{cout<<" ";}
		}
		
		for(j=n;j>1;j--){
			if(j==i)
			{cout<<j;}
			
			else
			{cout<<" ";}
			
			
		}
		
		
		cout<<endl;
		
	}
	
	
	
	
	
	
	
	
	
}
