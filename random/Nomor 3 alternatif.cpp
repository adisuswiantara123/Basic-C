#include <iostream>
 
using namespace std;
 
int main()
{
  cout << "Menentukan Nama Bulan sehi"<<endl;
  cout << endl;
 
  int x;
  string bulan;
  
 
  cout << "Input angka bulan (1-12): ";
  cin >> x;
 
  switch (x) {
   case 1:  bulan = "Januari";   break;
   case 2:  bulan = "Februari";  break;
   case 3:  bulan = "Maret";     break;
   case 4:  bulan = "April";     break;
   case 5:  bulan = "Mei";       break;
   case 6:  bulan = "Juni";      break;
   case 7:  bulan = "Juli";      break;
   case 8:  bulan = "Agustus";   break;
   case 9:  bulan = "September"; break;
   case 10: bulan = "Oktober";   break;
   case 11: bulan = "November";  break;
   case 12: bulan = "Desember";  break;
   default: bulan = "Pilihan tidak tersedia";
  }
 
  if ((x >= 1) && (x <= 12)) {
    cout << "Bulan ke-" <<x<<" adalah "<< bulan;
  }
 
  cout << endl;
  return 0;
}
