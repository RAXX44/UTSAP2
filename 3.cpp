#include <iostream>             // Mendeklarasikan library input/output stream
#include <string>               // Mendeklarasikan library string
using namespace std;

// Fungsi untuk menghitung jumlah kuadrat dari semua bilangan ganjil dari 1 sampai n
int hitung() {
    system("CLS");                          // Membersihkan layar
    int n;
    cout << "=== Menghitung Jumlah Kuadrat Bilangan Ganjil ===" << endl;
    cout << "\nMasukkan n: ";
    cin >> n;

    int total = 0;
    string rumus = "";                   // Untuk menyimpan rumus penjumlahan
    for (int i = 1; i <= n; i += 2) {       // pengulangan melalui bilangan ganjil dari 1 hingga n
        total += i * i;                  // Menambahkan kuadrat bilangan ganjil ke total
        if (i != 1) {                  // Jika bukan bilangan ganjil pertama, tambahkan tanda tambah sebelum angka
            rumus += " + ";
        }
        rumus += to_string(i) + "^2"; // Menambahkan angka kuadrat ke rumus
    }
    cout << "n : " << n << " = " << total << "  || " << rumus << endl; // Menampilkan output sesuai format
    return total; // Mengembalikan nilai total
}

int main() {
    
    int hasil = hitung(); // untuk menghitung total

    return 0;       // Akhir dari fungsi main
}