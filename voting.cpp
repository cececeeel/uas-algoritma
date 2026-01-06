#include <iostream>
using namespace std;

int main() {
    int jumlahpemilih;
    int pilihan;
    int suara[2] = {0, 0};

    cout << "=== SISTEM VOTING SEDERHANA ===" << endl;
    cout << " Masukan Jumlah Pemilih: ";
    cin >> jumlahpemilih;

    for (int i = 0; i < jumlahpemilih; i++) {
        cout << "\nPemilih ke-" << i + 1 << endl;
        cout << "1. Kandidat A" << endl;
        cout << "2. Kandidat B" << endl;
        cout << "pilih(1/2): ";
        cin >> pilihan;

        if (pilihan == 1) {
            suara[0]++;
        } else if (pilihan == 2) {
            suara[1]++;
        } else {
            cout << "Pilihan tidak valid: " << endl;
            i--;
        }
    }

    cout << "\n=== HASIL VOTINNG ===" << endl;
    cout << "Kandidat A: " << suara[0] << " suara " << endl;
    cout << "Kandidat B: " << suara[1] << " suara " << endl;

    if (suara[0] > suara[1]) {
        cout << "pemenang: Kandidat A" << endl;
    } else if (suara[1] > suara[0]) {
        cout << "pemenang: Kandidat B" << endl;
    } else {
        cout << "Hasil seri" << endl;
    }

    return 0;
}