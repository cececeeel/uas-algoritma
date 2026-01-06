#include <iostream>
using namespace std;

int main() {
    string nama[10];
    int berat[10];
    int totalharga[10];
    int jumlah;
    int hargaPerKg = 10000;

    cout << "=== APLIKASI PENGELOLAAN LAUNDRY ===" << endl;
    cout << "Masukan Jumlah Pelanggan: ";
    cin >> jumlah;

    for (int i = 0; i < jumlah; i++) {
        cout << "\nPelanggan ke-" << i + 1 << endl;
        cout << " Nama         :"; 
        cin >> nama[i];
        cout << " Berat Laundry: ";
        cin >> berat[i];

        if (berat[i] > 0) {
            totalharga[i] = berat[i] * hargaPerKg;
        } else {
            totalharga[i] = 0;
        }
    }
    cout << "\n=== DAFTAR LAUNDRY ===" << endl;
    cout << "nama\tberat\ttotal harga" << endl;
    
    for(int i = 0; i < jumlah; i++) {
        cout << nama[i] << "\t"
             << berat[i] << "Kg\tRp"
             << totalharga[i] << endl;
    }

    cout << "\n TERIMAKASIH" << endl;
    return 0;
}