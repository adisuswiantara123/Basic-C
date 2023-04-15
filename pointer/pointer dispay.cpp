#include <iostream>
using namespace std;

void display(int *arr){
	for(int i=0;i<5;i++){
		cout <<arr[i] << endl;
	}
}

int main(){
	int arr[5] = {10,20,30,40,50};
	display(arr);
	return 0; 
}
