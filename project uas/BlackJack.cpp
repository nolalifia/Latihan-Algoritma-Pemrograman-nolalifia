#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Pemain {

    string nama;
    int kartu [2];
    int total = 0;
    bool hidup = true;

};

void deskripsiGame (){

    cout << "\n        LEVEL 4       " << endl;
    cout << "\n=== 🃏 BLACKJACK 🃏 ===" << endl;
    cout << "\nBlackjack adalah permainan kartu di mana pemain bertujuan mendapatkan nilai kartu sedekat mungkin\n";
    cout << "dengan 21, tanpa melebihi angka tersebut. user 1 bermain melawan user 2.\n";
    cout << "Setiap pemain akan mendapatkan dua kartu pertama, lalu memilih apakah ingin:\n";
    cout << "\nHit → mengambil kartu tambahan\n";
    cout << "Stand → berhenti mengambil kartu dan mempertahankan nilai sekarang\n";

    cout << "\n- NILAI KARTU -\n";
    cout << "\n* Angka 2–10 → sesuai angkanya\n";
    cout << "* Jack, Queen, King → 10\n";
    cout << "* Ace → bisa bernilai 1 atau 11, tergantung mana yang menguntungkan pemain\n";

    cout << "\n- KONDISI MENANG -\n";
    cout << "\n* Nilai kartu lebih tinggi dari lawan, tapi tidak melebihi 21, atau\n";
    cout << "* lawan melebihi 21 (bust)\n";
    cout << "\n* pemain yang melebihi 21 → langsung kalah.\n\n";

    
}

void kondisiKartu (string kartu [], int nilai [], bool pakai [], int n){

    string k = kartu [n];
    pakai [n] = true;
    
    if (k == "2♣" || k == "2♦" || k == "2♥" || k == "2♠") nilai[n] = 2;
    else if (k == "3♣" || k == "3♦" || k == "3♥" || k == "3♠") nilai[n] = 3;
    else if (k == "4♣" || k == "4♦" || k == "4♥" || k == "4♠") nilai[n] = 4;
    else if (k == "5♣" || k == "5♦" || k == "5♥" || k == "5♠") nilai[n] = 5;
    else if (k == "6♣" || k == "6♦" || k == "6♥" || k == "6♠") nilai[n] = 6;
    else if (k == "7♣" || k == "7♦" || k == "7♥" || k == "7♠") nilai[n] = 7;
    else if (k == "8♣" || k == "8♦" || k == "8♥" || k == "8♠") nilai[n] = 8;
    else if (k == "9♣" || k == "9♦" || k == "9♥" || k == "9♠") nilai[n] = 9;
    else if (k == "10♣" || k == "10♦" || k == "10♥" || k == "10♠") nilai[n] = 10;
    else if (k == "J♣" || k == "J♦" || k == "J♥" || k == "J♠") nilai[n] = 10;
    else if (k == "Q♣" || k == "Q♦" || k == "Q♥" || k == "Q♠") nilai[n] = 10;
    else if (k == "K♣" || k == "K♦" || k == "K♥" || k == "K♠") nilai[n] = 10;
    else if (k == "A♣" || k == "A♦" || k == "A♥" || k == "A♠") nilai[n] = 11;

}

void inputKartu (int user [], int dealer [], int hitung){

    user [0] = rand () % hitung;
    do {
        user [1] = rand() % hitung;
    } while (user [1] == user [0]);

    do {
       dealer [0] = rand () % hitung;
    } while (dealer [0] == user [0]|| dealer [0] == user [1]);

    do {
       dealer [1] = rand () % hitung;
    } while (dealer [1] == user [0] || dealer [1] == user [1] || dealer [1] == dealer [0]);

}

void hitungKartu (int nilai [], int userDealer [], int &total) {

    for (int i = 0; i < 2; i++){

        total += nilai [userDealer [i]];

    }
}

int hit (bool pakai [], int hitung){

    int index;

    do {

        index = rand() % hitung;
    } while (pakai [index]);

    pakai [index] = true;

    return index;

}

void stand (){

}

int main(){

    deskripsiGame ();
    string kartuDeck[52];
    int nilaiKartu[52];
    bool pakai [52] = {false};
    Pemain pemain [2];

    int totalUser = 0;
    int totalDealer = 0;
    int hitung = 0;

    for (int i = 0; i < 2; i++){
        cout << "Masukan nama pemain ke " << i+1 << ": ";
        getline(cin, pemain [i].nama);
    }

    cout << endl;

    ifstream buka_file("kartuAS.txt");
    if (buka_file.fail()){
        cout << "file tidak ditemukan atau gagal dibuka.\n";
        return 0;
    }

    while (hitung < 52 && getline(buka_file, kartuDeck[hitung])) hitung++;
    buka_file.close();

    srand(time(NULL));
    inputKartu(pemain[0].kartu, pemain[1].kartu, hitung);

    for (int i = 0; i < hitung; i++){
        kondisiKartu(kartuDeck, nilaiKartu, pakai, i);
    }

    cout << endl;

    // Pemain 1
    cout << "Kartu " << pemain[0].nama << ": "
         << kartuDeck[pemain[0].kartu[0]] << " + " << kartuDeck[pemain[0].kartu[1]] << endl;
    hitungKartu(nilaiKartu, pemain[0].kartu, totalUser);

    // Pemain 2
    cout << "Kartu " << pemain[1].nama << ": "
         << kartuDeck[pemain[1].kartu[0]] << " + " << kartuDeck[pemain[1].kartu[1]] << endl;
    hitungKartu(nilaiKartu, pemain[1].kartu, totalDealer);

    cout << "\nTotal " << pemain[0].nama << ": " << totalUser << endl;
    cout << "Total " << pemain[1].nama << ": " << totalDealer << endl;


    for (int i = 0; i < 100; i++){

        int jawaban = 0;
        // Pemain 1
        if (i % 2 == 0){

            cout << "Kartu " << pemain[0].nama << ": "
                 << kartuDeck[pemain[0].kartu[0]] << " + " << kartuDeck[pemain[0].kartu[1]] << endl;
            hitungKartu(nilaiKartu, pemain[0].kartu, totalUser);

            cout << "\nPilih aksi:\n"
                 << "1. HIT  – Ambil kartu baru\n"
                 << "2. STAND – Tidak mengambil kartu\n"
                 << "\nMasukkan pilihan Anda (Angka): ";
            cin  >> jawaban;

            switch (jawaban){

                case 1: 
                        int index = hit (pakai, hitung);
                        cout << "Kartu barumu adalah: " << kartuDeck [index] << endl;

                case 2:
            }

        }
    }
}
