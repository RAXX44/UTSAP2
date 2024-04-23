#include <iostream> 					// Mendeklarasikan library input/output stream
#include <string> 					// Mendeklarasikan library string

using namespace std; 				//Mengatifkan using namespace std

char nilaiakhir(int tugas, int quis, int uts, int uas) { 	// Fungsi untuk menghitung nilai akhir
    int nilai = (tugas + quis + uts + uas) / 4; 			// Menghitung nilai rata-rata
    if (nilai >= 80) { 						
        return 'A'; 						//jika nilai ya 80 maka nilai akhir nya adalah a dan seterusnya begitu 
    } else if (nilai >= 70) { 					
        return 'B'; 	
    } else if (nilai >= 60) { 					
        return 'C'; 						
    } else if (nilai >= 50) { 				
        return 'D'; 						
    } else { 							
        return 'E'; 						
    }
}

int main() { 						// fungsi main
    string nama, nim, kom, matkul, nama_dosenpa; 			// Deklarasi variabel string
    int tugas, quis, uts, uas; 					// Deklarasi variabel integer

    system("CLS"); 						// Membersihkan layar
    cout << "===== Pendataan KHS Mahasiswa =====" << endl; 		// Tampilkan teks Pendataan KHS Mahasiswa 
    cout << "Masukkan nama  : "; 					//tampilkan teks tersebut
    getline(cin, nama); 						//dan inputkan
    cout << "Masukkan NIM   : "; 					
    getline(cin, nim); 						
    cout << "Masukkan KOM   : "; 					
    getline(cin, kom); 			
    cout << "Masukkan Mata Kuliah: "; 				
    getline(cin, matkul); 						
    cout << "Masukkan Nilai Tugas: "; 				
    cin >> tugas; 						
    cout << "Masukkan Nilai Quis : "; 				
    cin >> quis; 						
    cout << "Masukkan Nilai UTS  : "; 				
    cin >> uts; 						
    cout << "Masukkan Nilai UAS  : "; 				
    cin >> uas; 						
    cin.ignore(); 						// Membersihkan buffer input
    cout << "Masukkan Nama Dosen PA: "; 				
    getline(cin, nama_dosenpa); 					// Input nama dosen pembimbing akademik

    char nilai = nilaiakhir(tugas, quis, uts, uas); 		// Panggil fungsi nilaiakhir dan simpan hasilnya ke variabel nilai

    cout << "\n===== Data Mahasiswa =====" << endl; 			// Tampilkan teks Data Mahasiswa yang sudah di input
    cout << "Nama       : " << nama << endl; 				
    cout << "NIM        : " << nim << endl; 				
    cout << "KOM        : " << kom << endl; 				
    cout << "Mata Kuliah: " << matkul << endl; 				
    cout << "Nilai      : " << nilai << endl; 				
    cout << "Dosen PA   : " << nama_dosenpa << endl; 			

    return 0; 							// Akhir dari fungsi main
}
