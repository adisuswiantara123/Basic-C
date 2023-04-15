#include <iostream>
using namespace std;

int main(){
	
	int i=0;
	int total1,total2,total3;
	total1=0;
	total2=0;
	total3=0;
	while(i<20)
	{
		
		if(i%3==0)
			{
				total1=total1+i;
				//3+6+9+12+15+18
			}
		
		else if(i%3==1)
			{
				total2=total2+i;
				//1+4+7+10+13+16+19
			}
		
		else{
			total3=total3+i;
			//2+5+8+11+14+17
		}
		i=i+1  ;   
	}
	
	cout<<"Total 1: "<<total1<<endl;
	cout<<"Total 2: "<<total2<<endl;
	cout<<"Total 3: "<<total3<<endl;
	cout<<i<<endl;
	
	
	
	
}
