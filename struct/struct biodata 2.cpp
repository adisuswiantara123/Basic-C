#include <iostream>
using namespace std;

struct biodata{
	
	string nama[4];   
	string lahir;
	string goldarah;
	string hobby[2];
	
};
	
	int main(){
		
		
		biodata bio,bio1;
		
		
		bio.nama[0]="Gustavo";
		bio.nama[1]="Fring";
		bio.lahir="Rapen";
		bio.goldarah="A";
		bio.hobby[0]="Badminton";
		bio.hobby[1]="Game";
		
		cout<<endl;
		
		bio1.nama[0]="Walter";
		bio1.nama[1]="White";
		bio1.lahir="New Mexico";
		bio1.goldarah="B";
		bio1.hobby[0]="Cook";
		bio1.hobby[1]="Meth";
		   
		   
		cout<<bio.nama[0]<<endl;
		cout<<bio.nama[1]<<endl;
		cout<<bio.lahir<<endl;
		cout<<bio.goldarah<<endl;
		cout<<bio.hobby[0]<<endl;
		cout<<bio.hobby[1]<<endl;
		cout<<endl;
		
		cout<<bio1.nama[0]<<endl;
		cout<<bio1.nama[1]<<endl;
		cout<<bio1.lahir<<endl;
		cout<<bio1.goldarah<<endl;
		cout<<bio1.hobby[0]<<endl;
		cout<<bio1.hobby[1]<<endl;
		
		
		
//		cout<<bio.nama[1]<<endl;
//		cout<<bio.hobby[1]<<endl;return 0;
		
	}