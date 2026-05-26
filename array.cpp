#include <iostream>
using namespace std;

int main(){
    // Definisikan Array
    // Tipe_data Nama_array[Jumlah_elemen]
    int list_of_num[5];

    for(int i=0; i<5; i++){
       // Masukan data
       cin >> list_of_num[i] ;
    }
    
    // Memanggil Nilai Array
    for(int i=0; i<5; i++){
        // cout << "Baris ke-"<< i << " =" << list_of_num[i] << endl;
        cout << list_of_num << endl;
    }
    return 0;
}