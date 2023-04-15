#include <iostream>
using namespace std;

int main(){
	int i,j,k;
	
	for (i=1;i<=5;i++)
    {
    	
     for (j=(5-1);j>=i;j--)
	 {cout<<(" ");}
          
     for (k=1;k<=i;k++)
	 {cout<<k<<"";}
		       
     
     for (k=(i-1);k>=1;k--)
     {cout<<k<<"";}
     
	 cout<<""<<endl;
    
	}

	for (i=(5-1);i>=1;i--)
	{
     
	 for (j=(5-1);j>=i;j--)
    {cout<<" ";}
          
    for (k=i;k>=1;k--)
    {cout<<k<<"";}
    
     for (k=1;k<=(i-1);k++)
    {cout<<k<<"";}
    
     cout<<""<<endl;
     }
	
	
}
	
	

