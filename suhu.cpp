#include <iostream>
#include <cstdlib>
using namespace std;

// Fungsi Konversi Celcius ke Reamur
float toReamur(float c){
    return 4.0/5.0 * c;
}

// Fungsi Konversi Celcius ke Farenheit
float toFarenheit(float c){
    return (9.0/5.0 * c) + 32.0;
}

// Fungsi Konversi Celcius ke Kevin
float toKevin(float c){
    return c + 273.0;
}

// Fungsi Utama
int main(){
    float celcius;
    int menu = 0;

    while(menu != 4){

        // cin.ignore()
        system("cls"); // Membersihkan Terminal

        cout << "===== Konversi Suhu =====";
        cout << "\n1. Celcius to Reamur";
        cout << "\n2. Celcius to Farenheit";
        cout << "\n3. Celcius to Kevin";
        cout << "\n4. Keluar";
        cout << "\nMasukan Pilihan Menu : ";
        cin >> menu;

        // Percabangan Utama
        if (menu >= 1 && menu <= 3){
            cout << "Masukan Nilai Celcius : ";
            cin >> celcius;

            // Percabangan Konversi
            if(menu == 1){
                cout << "\nNilai Reamur dari " << celcius << "C adalah " << toReamur(celcius) << "R\n";
            }

            else if(menu==2){
                cout << "\nNilai Farenheit dari " << celcius << "C adalah " << toFarenheit(celcius) << "F" << endl;
            }

            else if(menu==3){
                cout << "\nNilai Kevin dari " << celcius << "C adalah " << toKevin(celcius) << "K\n";
            }

            system("pause");
        }

        // Keluar
        else if(menu == 4){
            cout << "Program Selesai";
        }

        // Tidak ada dimenu
        else{
            cout << "Pilihan Tidak Ada di Menu\n";
            system("pause");
        }

    }

    return 0;
}