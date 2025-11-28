#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream lirik_lagu("barney.txt");

    if (!lirik_lagu.is_open()) {
        cout << "❌ File gagal dibuka!" << endl;
        return 1;
    } else {
        cout << "✅ File berhasil dibuka!" << endl;
    }

    string s;
    bool adaIsi = false;

    while (getline (lirik_lagu, s)) {
        adaIsi = true;
        cout << s << " -> ";
        if (isalpha(s[0])) {
            cout << "Ini Alphabet" << endl;
        } else if (isdigit(s[0])) {
            cout << "Ini Angka" << endl;
        } else {
            cout << "Ini karakter lain" << endl;
        }
    }

    if (!adaIsi) {
        cout << "⚠️ File kosong atau tidak terbaca!" << endl;
    }

    lirik_lagu.close();
}
