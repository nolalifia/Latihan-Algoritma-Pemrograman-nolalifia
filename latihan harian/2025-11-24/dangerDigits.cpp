#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;


void deskripsiGame (){

    cout << "\n       LEVEL 2       " << endl;
    cout << "\n=== DANGER DIGITS ===" << endl;
    cout << "\n(Deskripsi game)\n" << endl;
    cout << "Game ini memiliki satu angka bom yang dipilih secara acak dari rentang 1–100.\n";
    cout << "Para pemain bergiliran memilih angka, dan setiap pilihan akan mempersempit rentang permainan\n";
    cout << "sesuai dengan posisi angka bom yang sebenarnya. Rentang akan terus mengecil seiring giliran berjalan\n";
    cout << "hingga salah satu pemain memilih angka yang sama dengan angka bom. Pemain yang memilih angka tersebut dinyatakan kalah.\n";   
}

void inputUser (string user [], int &n, int angka [100]){

     for (int i = 0; i < 100; i++) {
        angka[i] = i + 1;
    }

    // input nama player
    cout << "\n";
    for (int i = 0; i < n; i++) {
        cout << "Masukan nama player ke " << i + 1 << ": ";
        getline(cin, user[i]);
    }
}

void programGame (int target, int min, int max, int random, string user [], int n){

        for (int i = 0; i < 100; i++) {
        cout << "\n* PUTARAN KE-" << i+1 << " *\n" << endl;
        for (int j = 0; j < n; j++) {

            cout << "Berapa angka yang " << user[j] << " inginkan? ";
            cin >> target;

            while (target < min || target > max) {
                cout << "Input tidak valid!, Masukkan angka dengan rentang "
                     << min << "-" << max << ": ";
                cin >> target;
            }

            if (random > target) {
                min = target;
                cout << "\nBom berada pada rentang " << min << "-" << max << endl;
                cout << "\n";

            } else if (random < target) {
                max = target;
                cout << "\nBom berada pada rentang " << min << "-" << max << endl;
                cout << "\n";

            } else {
                cout << "\nDOR! kamu kena bom, kamu mati di level ini" << endl;
                cout << user [j] << " kalah pada putaran ke " << i+1 << "! :p" << endl << "\n";
            }
        }
    }
}


int main() {

    deskripsiGame ();
    int angkaProgram[100];   // untuk simpan data dari file
    int angka[100];          // angka 1–100
    int n, target;
    string jawaban;

    cout << "\nApakah kalian siap memulai game ini? (yay!/nay!) ";
    cin >> jawaban;

    if (jawaban == "yay!") {

        cout << "\nMasukan jumlah orang yang ingin bermain: ";
        cin >> n;

    } else {
        cout << "\nKamu keluar dari program, terima kasih sudah bermain hingga level 3!" << endl << "\n";
        return 0;
    }

    cin.ignore();
    string user[n];

    inputUser (user, n, angka);

    // baca file angkaBom.txt
    ifstream angkaText("angkaBom.txt");
    int baca_angka = 0;

    while (angkaText >> angkaProgram[baca_angka]) {
        baca_angka++;
        if (baca_angka >= 100) break;
    }

    angkaText.close();

    if (baca_angka == 0) {
        cout << "File kosong / tidak bisa dibaca!\n";
        return 0;
    }

    // random ambil angka dari file
    srand(time(NULL));
    int posisi = rand() % baca_angka; //posisinya yang random

    int angkaRandom = angkaProgram[posisi];

    // game dimulai
    int maxRange = 100;
    int minRange = 1;

    cout << "\n=== GAME DIMULAI ===\n";
    programGame (target, minRange, maxRange, angkaRandom, user, n);
}
