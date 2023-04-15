#include <iostream>
using namespace std;

int fibo(int n)
{
   if(n==0){
   return 0;
   }
   
   else if(n==1){
   return 1;
   }
   
   else{
   //fungsi rekursif
     return fibo(n-1)+fibo(n-2);
	 }
}

int main(){

//{ clrscr();
  int bil;

  cout<<"Fungsi Rekursif untuk mencari Bilangan Fibonacci ke-n"<<endl;

  cout<<"Masukkan bilangan suku ke-n = ";
  cin>>bil;
      //pemanggilan fungsi
  cout<<"Fibonacci("<<bil<<")= "<<fibo(bil);

//  getche();
  return 0;
}

