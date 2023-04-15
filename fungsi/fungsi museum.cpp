#include <iostream>
using namespace std;


int jumlahR(int x, int a){
    cout << "Berapa jumlah pengunjung: ";
    cin >> a;
    if (x==0){
        return a;
    }
	else{
        return a + jumlahR(x-1,a);
    }
}


int main(){
    int n;
    cout << "Masukkan berapa bulan: ";
    cin >> n;
    if(n>0){
        cout <<"jumlah total pengunjung= "<< jumlahR(n-1, 0);
    }
	else{
        return 0;
    }
    
}
