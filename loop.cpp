#include <iostream>
using namespace std;

// Standar Mode
// int main(){
//     cout << "TES BERHASIL JALAN!" << endl; 
//     cout << "TES BERHASIL JALAN!" << endl; 
//     cout << "TES BERHASIL JALAN!" << endl; 
// }


// For Loop Mode
// int main(){
//     int n;
//     cout << "Masukan Looping Sampai Berapa : ";
//     cin >> n;

//     for(int i = 0; i < n; i+=2){
//         cout << "Perulangan ke-" << i << endl;
//     }
//     return 0;
// }

// For Template
// for (intial, kondisi, increament){
    //     output
    // }
    
// While Loop Mode
int main(){
    int n;
    cout << "Masukan Looping Sampai Berapa : ";
    cin >> n;
    
    int i;    
    i = 0;
    while(i < n){
        cout << "Perulangan ke-" << i << endl;
        i += 2;
    }
}