#include <iostream>
using namespace std;

struct Motor{
    string merek;
    int jumlah;
};


int main(){

    // nama_variabel[baris][kolom]
    Motor matrix[4] = {
        {"Honda", 35},
        {"Yamaha", 26},
        {"Suzuki", 9},
        {"Kawasaki", 16},
    } ;

    // matrix[0][0]=50;
    // matrix[0][1]=-9;
    // matrix[1][0]=80;
    // matrix[1][1]=100;

    // Output
    // Merek : {Nama merek}
    // Jumlah : {jumlah terjual}
    // baris  kolom

    // Menu Pencarian
    string cari;
    cout << "Masukan Merek : ";
    cin >> cari;

    bool hasil = false;

    for(int baris=0; baris < 4; baris++){
        if (matrix[baris].merek == cari){
            cout << "Data Ditemukan" << endl ;
            cout << "Merek : " << matrix[baris].merek << endl;
            cout << "Jumlah Terjual : " << matrix[baris].jumlah << endl;
            cout << endl;
        }

        hasil = true;
    }

    if(hasil == false){
        cout << "Data Tidak Ditemukan" ;
    }

    return 0;
}