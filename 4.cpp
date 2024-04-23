#include <iostream>             // Mendeklarasikan library input/output stream
#include <string>               // Mendeklarasikan library string

using namespace std;

int main () {
    system ("CLS"); //membersihkan layar 

    string a;
    int umur = 20;

    // Tentukan label "umur"
    umur:
    cout << "Tebak Umur Saya : ";

    // Menggunakan cin untuk menerima input dari pengguna
    cin >> a;

    // Menggunakan perbandingan (==) untuk membandingkan nilai variabel a dengan 20
    if (a == "20"){
        cout << "Jawaban Anda Benar" << endl;
    } else {
        // Menghapus tanda kurung kurawal ({}) yang tidak perlu di blok else if
        cout << "Jawaban Salah, Coba Lagi..." << endl;
        // Menggunakan goto untuk mengulangi blok kode dengan label "umur"
        goto umur;
    }

    
    cout << "Program Selesai";

    return 0;       // Akhir dari fungsi main
}