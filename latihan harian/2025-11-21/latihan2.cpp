#include <iostream>
#include <fstream>
using namespace std;

int main(){

    string nama;
    int umur;

    cout << "Masukan nama Anda: ";
    getline (cin, nama);

    cout << "Masukan umur Anda: ";
    cin >> umur;

    ofstream data;
    data.open ("mahasiswa.txt", ios::app);
    data << "Halo " << nama << "!" << " umur kamu tercatat " << umur << " tahun" << endl;

}