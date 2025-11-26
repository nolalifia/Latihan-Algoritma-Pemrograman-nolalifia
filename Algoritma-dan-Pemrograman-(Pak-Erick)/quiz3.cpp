#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

void deskripsiGame() {
    cout << "\n        LEVEL 4       " << endl;
    cout << "\n=== 🃏 BLACKJACK 🃏 ===" << endl;
    cout << "\nBlackjack adalah permainan kartu di mana pemain bertujuan mendapatkan nilai kartu sedekat mungkin\n";
    cout << "dengan 21, tanpa melebihi angka tersebut. Pemain bermain melawan dealer.\n";
    cout << "\nHit → mengambil kartu tambahan\n";
    cout << "Stand → berhenti mengambil kartu\n";
}

int main() {
    deskripsiGame();

    string kartu[52];
    int hitung = 0;

    ifstream buka_file("kartuAS.txt");

    // ======================
    // CEK FILE TERBACA ATAU GA
    // ======================
    if (!buka_file.is_open()) {
        cout << "\nERROR: File 'kartuAS.txt' tidak ditemukan!" << endl;
        cout << "Pastikan file berada di folder yang sama dengan executable!" << endl;
        return 0;
    }

    cout << "\nDEBUG: File berhasil dibuka." << endl;

    // Baca file
    while (hitung < 52 && getline(buka_file, kartu[hitung])) {
        if (!kartu[hitung].empty()) {
            cout << "DEBUG: Line terbaca → " << kartu[hitung] << endl;   // tampilkan isinya
            hitung++;
        }
    }

    buka_file.close();

    cout << "DEBUG: Total baris terbaca = " << hitung << endl;

    // ======================
    // CEK APAKAH FILE KOSONG
    // ======================
    if (hitung == 0) {
        cout << "\nERROR: File ditemukan, tapi kosong / tidak memiliki data valid!" << endl;
        return 0;
    }

    // ======================
    // RANDOM KARTU
    // ======================
    srand(time(NULL));

    int idx1 = rand() % hitung;
    int idx2;

    do {
        idx2 = rand() % hitung;
    } while (idx2 == idx1);

    cout << "\n=== KARTU RANDOM ===" << endl;
    cout << "Kartu 1: " << kartu[idx1] << endl;
    cout << "Kartu 2: " << kartu[idx2] << endl;

    return 0;
}
