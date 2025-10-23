/* 
Nama: Naura Alifia
NPM: 140810250088
Mulai: 
Kamis, 2 Oktober 07.44-8.10;
                 08.50-9.52;
Selesai: Kamis, 2 Oktober 9.52
Nama program: Program menyimpan nilai mahasiswa.
*/

#include <iostream>
#include <iomanip>
using namespace std;

void inputNama (string mahasiswa [5])
{
    for (int ke = 0; ke < 5; ke++ )
    {
        cout << "Masukan nama mahasiswa ke " << ke + 1 << ": ";
        getline (cin, mahasiswa [ke]);
    }
}

void inputNilai (int nilai [5], string mahasiswa [5])
{
    for (int ke = 0; ke < 5; ke++)
    {
        cout << "Masukan nilai " << mahasiswa[ke] << ": ";
        cin >> nilai [ke];
    }
}


void daftarNamaNilai (string mahasiswa [5], int nilai [5])
{
    cout << "\t === Daftar Nama dan Nilai Mahasiswa === \n" << endl;
    cout << left << setw(20) << "Nama Mahasiswa" 
    << right << setw (14)<< "nilai" << endl;

    for (int ke = 0; ke < 5; ke++)
    {
        cout << ke + 1 << ". " 
        << left << setw (20) << mahasiswa [ke] 
        << right << setw (10) << nilai [ke] << endl;
    }
}

double rata2 (int nilai [5])
{
    int total = 0;
    int hasil = 0;
    for (int ke = 0; ke < 5; ke++)
    {
        total = nilai [ke]/5;
        hasil += total;

    }
    return hasil;

}

int nilaiMin (int nilai [5])
{
    int min = nilai [0];
    for (int ke = 0; ke < 5; ke++)
    {
        if (min > nilai [ke])
        {
            min = nilai [ke];
        }
    }
    return min;
}

int nilaiMax (int nilai [5])
{
    int max = nilai [0];
    for (int ke = 0; ke < 5; ke++)
    {
        if (max < nilai [ke])
        {
            max = nilai [ke];
        }
    }
    return max;
}

string namaMin (string mahasiswa [5], int nilai [5])
{
    string naMin = mahasiswa [0];
    int min = nilai [0];
    for (int ke = 0; ke < 5; ke++)
    {
        if (min > nilai [ke])
        {
        naMin = mahasiswa [ke];
        }
    }
    return naMin;
}

string namaMax (string mahasiswa [5], int nilai [5])
{
    string naMax = mahasiswa [0];
    int max = nilai [0];
    for (int ke = 0; ke < 5; ke++)
    {
        if  (max < nilai [ke])
        {
        naMax = mahasiswa [ke];
        }
    }
    return naMax;
}

int main (){

    string mahasiswa [5];
    int nilai [5];
    inputNama (mahasiswa);
    inputNilai (nilai, mahasiswa);
    daftarNamaNilai (mahasiswa, nilai);
    cout << "\n---------------------------------------------------\n" << endl;
    cout << "Nilai rata-rata mahasiswa: " << rata2 (nilai) << endl;
    cout << "Nilai minimum mahasiswa: " << nilaiMin (nilai) << endl;
    cout << "Nilai maksimum mahasiswa: " << nilaiMax (nilai) << endl;
    cout << "Mahasiswa dengan nilai terendah adalah " << namaMin (mahasiswa, nilai) << endl;
    cout << "Mahasiswa dengan nilai tertinggi adalah " << namaMax (mahasiswa, nilai) << endl;

}