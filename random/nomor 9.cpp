     #include <iostream>
using namespace std;


int main(){
	
	int nilai,jumlah;
	int note500, note100, note50, note10, note5, note2, note1; 
	note500 = note100 = note50 = note10 = note5 =  note2 = note1 = 0;
	
	cout<<"Nilai Uang: ";
	cin>>nilai;
	
	
	if(nilai>=500){
		note500 = nilai/500;
		nilai -= note500 *500;
	}
	
	if(nilai>=100){
		note100 = nilai/100;
		nilai -= note100 *100;
	}
	
	if(nilai>=50){
		note50 = nilai/50;
		nilai -= note50 *50;
	}
	
	if(nilai>=10){
		note10 = nilai/10;
		nilai -= note10 *10;
	}
	
	if(nilai>=5){
		note5 = nilai/5;
		nilai -= note5 *5;
	}
	
	if(nilai>=2){
		note2 = nilai/2;
		nilai -= note2 *2;
	}
	
	if(nilai>=1){
		note1 = nilai;
	}
	
	jumlah=note500+note100+note50+note10+note5+note2+note1;
	

	
	cout<<jumlah<<" lembar dengan rincian "<<
	"500="<<note500<<","<<"100="<<note100<<","<<"50="<<note50<<","<<"10="<<note10<<","<<
	"5="<<note5<<","<<"2="<<note2<<","<<"1="<<note1;
	
	
	return 0;
	
}
