#include <iostream>
using namespace std;

// Function Faktorial
long faktorial(int n){
    if (n == 0 || n == 1) {
        return 1;
    }else{
        return n * faktorial(n-1);
    }
}
// Function FPB
void fpb(){
    cout << "Operation FPB";
}

// Function KPK
void kpk(){
    cout << "Operation KPK";
}

// Function Main
int main(){
    cout << "Math Function" << endl << "1. Faktorial" << endl << "2. FPB" << endl << "3. KPK" << endl ;
    
    int menu;
    cout << "Masukan Pilihan Menu : " ;
    cin >> menu;

    // Percabangan utama
    if (menu == 1){
        int angka;

        cout << "Masukan Angka : ";
        cin >> angka;

        if (angka < 0){
            cout << "Angka yang dimasukan bernilai Negatif" ;
        }else{
            cout << "Faktorial Dari " << angka << " = " << faktorial(angka) << endl;
        }
        return 0;
    }
    
    else if (menu == 2){
        // int angka1, angka2;

        // cout << "FPB Dari " << angka1 << " dan " << angka2 << faktorial(angka1, angka2) << endl;

        fpb();
    }

    else if (menu == 3){
        kpk() ;
    }

    else{
        cout  << "Pilihan Tidak Ada di Menu" ;
    }
}