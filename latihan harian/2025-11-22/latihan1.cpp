#include <iostream>
#include <fstream>

using namespace std;
int main (){

    int n;
    cout << "berapa elemen yang ingin Anda tulis? ";
    cin >> n;
    double total = 0;

    int deret [n];
    for (int i = 0; i < n; i++) {
        cout << "Masukan elemen ke-" << i+1 << ": ";
        cin >> deret [i];
    }

    ofstream tulis;
    tulis.open ("rata.txt", ios::app);
    for (int i = 0; i < n; i++) {

        tulis << "deret [" << i <<"]: " << deret [i] << endl;
        total += deret [i];
    }
    tulis << "rata-rata ke-" << n << " bilangan tersebut adalah " << total/n << endl;
    tulis << "====================================================================" << endl;
    tulis.close();
}