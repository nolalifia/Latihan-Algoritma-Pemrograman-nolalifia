#include <iostream>
#include <fstream>

using namespace std;
int main (){

    int n;
    cin >> n;
    string nama [n];

    for (int i = 0; i < n; i++) {
        cout << "Masukan nama ke-" << i+1 << ": ";
        cin >> nama [i];
    }

    ofstream tulis;
    tulis.open ("nama.txt", ios::app);
    for (int i = 0; i < n; i++) {
        tulis << nama [i] << endl;
    }

    tulis.close ();

    ifstream baca;
    baca.open ("nama.txt");

    if (baca.fail()){
        cout << "gagal";
    } else {
        cout << "berhasil" << endl;
    }

    
}