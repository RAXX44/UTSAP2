#include <iostream> 				// Mendeklarasikan library input/output stream
#include <string> 				// Mendeklarasikan library string

using namespace std; 				//Mengatifkan using namespace std

int main() { 					// Fungsi main
    system("CLS"); 				// Membersihkan layar
    int choice; 				// Deklarasi variabel integer
    string presiden; 				// Deklarasi variabel string

    cout << "=== Daftar Calon Presiden ===\n"; 			// Tampilkan teks Daftar Calon Presiden 
    cout << "\n1. Soekarno\n"; 				
    cout << "2. Soeharto\n"; 				
    cout << "3. Bj. Habibie\n"; 			
    cout << "\nMasukkan Pilihan Presiden anda: "; 			// Tampilkan teks 
    cin >> choice; 				// Input pilihan presiden

    switch (choice) { 				// Jika pilihan presiden adalah 1
        case 1: 				
            presiden = "1. Soekarno"; 			// Maka variabel presiden diisi dengan "1. Soekarno"
            break; 				// Keluar dari switch dan seterusnya
        case 2: 				
            presiden = "2. Soeharto"; 			
            break; 				
        case 3: 				
            presiden = "3. Bj. Habibie"; 			
            break; 				
        default: 				// Jika pilihan presiden tidak sesuai dengan kasus di atas
            presiden = "Pilihan invalid"; 			// Maka variabel presiden diisi dengan Pilihan invalid
            break; 				
    }

    if (presiden != "Pilihan invalid") { 				// Jika pilihan presiden tidak sama dengan Pilihan invalid
        cout << "\nPilihan anda telah disimpan, pilihan anda adalah " << presiden << endl; 	// Tampilkan teks "Pilihan anda telah disimpan, pilihan anda adalah [pilihan presiden]"
    }

    return 0; 					// Akhir dari fungsi main
}