#include <iostream>
using namespace std;

int main(){
	
	
	
	
	int i,j,k,n;
	
	
	cout<<"masukkan batas: ";
	cin>>n;
	
	
	for(i=1;i<=n;i++){
		
		for(j=n;j>1;j--){
			if(j<i)
			{cout<<" ";}
			
			else
			{cout<<"*";}
		}
		
	for(j=1;j<=n;j++){
			if(j<i)
			{cout<<" ";}
			
			else
			{cout<<"*";}
		}
		cout<<endl;
	}
	
	for(i=n-1;i>=1;i--){
		
		for(j=n;j>1;j--)
			if(j<i)
			{cout<<" ";}
			else
			{cout<<"*";}
		
		for(j=1;j<=n;j++){
			if(j<i)
			{cout<<" ";}
			else
			{cout<<"*";}
		}
		
		
	cout<<endl;	
	}
		
		
		
		
		
	}
		
		
		
		
		
		
		
		
		
		
		
	
	
	
	
	
	
	
	

