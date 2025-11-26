#include <iostream>
#include <string>
using namespace std;

int PenamaanMenu() {
    int pilihan, jumlah, total = 0;
    char ulang;

    do {
        cout << "===== MENU MAKANAN =====" << endl;
        cout << "1. Nasi Goreng   - Rp 15.000" << endl;
        cout << "2. Mie Ayam      - Rp 12.000" << endl;
        cout << "3. Soto Ayam     - Rp 10.000" << endl;
        cout << "4. Bakso         - Rp 13.000" << endl;
        cout << "=========================" << endl;

        cout << "Pilih menu (1-4): ";
        cin >> pilihan;
        cout << "Jumlah porsi: ";
        cin >> jumlah;

        switch(pilihan) {
            case 1: total += 15000 * jumlah; break;
            case 2: total += 12000 * jumlah; break;
            case 3: total += 10000 * jumlah; break;
            case 4: total += 13000 * jumlah; break;
            default: cout << "Pilihan tidak tersedia!" << endl;
        }

        cout << "Apakah ingin pesan lagi? (y/n): ";
        cin >> ulang;
    } while(ulang == 'y' || ulang == 'Y');

    return total;
}

void PembayaranMenu(string Pembeli, int total) {
    int bayar;

    cout << endl;
    cout << "           STRUK BELANJA        " << endl;
    cout << "Nama Pembeli : " << Pembeli << endl;
    cout << "Total Bayar  : Rp. " << total << endl;

    cout << "Uang Dibayar : Rp. ";
    cin >> bayar;

    if(bayar < total){
        cout << "Uang tidak cukup, transaksi dibatalkan!" << endl;
    } else {
        int kembalian = bayar - total;
        cout << "Kembalian    : Rp. " << kembalian << endl;
    }

    cout << "   Terima Kasih sudah Berbelanja   " << endl;
}

int main() {
    string Pembeli;
    int total;

    cout << "========== Warteg Pak Mamat ==========" << endl;
    cout << "Nama Pembeli : ";
    cin >> Pembeli;

    total = PenamaanMenu();
    PembayaranMenu(Pembeli, total);

    return 0;
}
