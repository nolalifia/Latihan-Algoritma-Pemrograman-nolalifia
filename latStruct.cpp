#include <iostream>
using namespace std;

//judul, jumlah hal, tahun terbit, penulis, user bisa ngeinput n banyak buku


struct buku {
    string judul;
    int jumlahHal;
    int tahunTerbit;
    string penulis;
};

int main (){
    int n;
    cout << "Masukan jumlah buku: ";
    cin >> n;
    cin.ignore();

    buku banyakBuku [n];

    for (int i = 0; i < n; i++)

    {
        getline (cin, banyakBuku[i].judul); 
        cin >> banyakBuku [i].jumlahHal
        >> banyakBuku[i].tahunTerbit
        >> banyakBuku[i].penulis;
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Judul buku: " << banyakBuku [i].judul << endl
        << "Jumlah halaman: " << banyakBuku [i].jumlahHal << endl
        << "Tahun terbit: " << banyakBuku[i].tahunTerbit << endl
        << "Penulis: " << banyakBuku[i].penulis << endl;
        cout << endl;
    }
}

