#include <iostream>
#include <math.h>
 
using namespace std;
 
void jumlah();
void kurang();
void kali();
void bagi();
void pangkat();
void akar();
//void Mod();
 
int main(){
     
    int pil;
//    char u;
	    
    cout << " Kalkulator Sederhana" << endl << endl;
    cout << " Pilih Operasi Aritmatika\n" << endl;
    cout << " 1. Penjumlahan" << endl;
    cout << " 2. Pengurangan" << endl;
    cout << " 3. Perkalian" << endl;
    cout << " 4. Pembagian" << endl;
    cout << " 5. Perpangkatan" << endl;
    cout << " 6. Akar Pangkat" << endl;
//    cout << " 7. Modulus" << endl;
    cout << "\n Pilihan Anda : ";
    cin >> pil;
    cout   << endl;
    switch(pil){
        case 1 :
            jumlah();
            break;
        case 2 :
            kurang();
            break;
        case 3 :
            kali();
            break;
        case 4 :
            bagi();
            break;
        case 5 :
            pangkat();
            break;
        case 6 :
            akar();
            break;
//        case 7 :
//            Mod();
//            break;
        default :
//            system("cls");
            cout << " Pilihan Anda Tidak Ada Dalam Menu." << endl;
//            goto q;
//            system("cls");
//            break;
			return 0;
    }
//    cout << endl;
//    cout << " ==================================================" << endl;
//    cout << " Apakah Anda Ingin Menginput Ulang ? [Y/T] ? ";
//    cin >> u;
//    if(u == 'Y' || u == 'y'){
//        system("cls");
//        goto q;
//    } else {
//        exit(0);
//    }
    return 0;
}
 
void jumlah(){
    float a, b;
    float hasil;
    cout << " Penjumlahan\n\n";
    cout << " Masukkan Bilangan Pertama : "; cin >> a;
    cout << " Masukkan Bilangan Kedua : "; cin >> b;
    hasil = a+b;
    cout << " Hasil Penghitungan : " << hasil;
}
 
void kurang(){
    float a, b;
    float hasil;
    cout << " Pengurangan\n\n";
    cout << " Masukkan Bilangan Pertama : "; cin >> a;
    cout << " Masukkan Bilangan Kedua : "; cin >> b;
    hasil = a-b;
    cout << " Hasil Penghitungan : " << hasil;
}
 
void kali(){
    float a, b;
    float hasil;
    cout << " Perkalian\n\n";
    cout << " Masukkan Bilangan Pertama : "; cin >> a;
    cout << " Masukkan Bilangan Kedua : "; cin >> b;
    hasil = a*b;
    cout << " Hasil Penghitungan : " << hasil;
}
 
void bagi(){
    float a, b;
    float hasil;
    cout << " Pembagian\n\n";
    cout << " Masukkan Bilangan Pertama : "; cin >> a;
    cout << " Masukkan Bilangan Kedua : "; cin >> b;
    hasil = a/b;
    cout << " Hasil Penghitungan : " << hasil;
}
 
void pangkat(){
    int bil;
    int pangkat1;
    float hasil = 0;
    cout << " Perpangkatan\n\n";
    cout << " Masukkan Bilangan : "; cin >> bil;
    cout << " Masukkan Pangkat : "; cin >> pangkat1;
    hasil = pow(bil,pangkat1);
    cout << " Hasil Penghitungan : " << hasil;
}
 
void akar(){
    float bil;
    float hasil = 0;
    cout << " Akar Pangkat\n\n";
    cout << " Masukkan Bilangan : ";
    cin >> bil;
    hasil = sqrt(bil);
    cout << " Hasil Penghitungan : " << hasil;
}
 
//void Mod(){
//    int a, b;
//    float hasil = 0;
//    cout << " Modulus\n\n";
//    cout << " Masukkan Bilangan : ";
//    cin >> a;
//    cout << " Masukkan Bilangan Pembagi : ";
//    cin >> b;
//    hasil = a%b;
//    cout << " Hasil Penghitungan : " << hasil;
//}
