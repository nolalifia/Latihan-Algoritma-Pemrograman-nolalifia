#include <iostream>
using namespace std;

typedef int matriks [100][100];
typedef int operasi [100][100];

void cinBaris (int &a, int &b)
{
    cout << "Masukan jumlah baris: ";
    cin >> a;
    cout << "Masukan jumlah kolom: ";
    cin >> b;
}

void cinElemenA (int a, int b, matriks A)
{
    cout << "masukan elemen matriks A: " << endl;
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                cin >> A [i][j];
            }
        }
}

void cinElemenB (int a, int b, matriks B)
{
    cout << "masukan elemen matriks B: " << endl;
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                cin >> B [i][j];
            }
        }
}

void jumlahAB (matriks A, matriks B, int a, int b, operasi tambah)
{
        //penjumlahan
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
            tambah [i][j] = A [i][j] + B [i][j];
            }
        }

}

void kurangAB (matriks A, matriks B, int a, int b, operasi kurang)
{
        //penjumlahan
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
            kurang [i][j] = A [i][j] - B [i][j];
            }
        }

}

void coutJumlah (int a, int b, operasi tambah)
{
    cout <<  "Hasil Penjumlahan (A + B):" << endl;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << tambah [i][j] << " ";
        }
        cout << endl;
    }
}

void coutKurang (int a, int b, operasi kurang)
{
    cout <<  "Hasil Pengurangan (A - B):" << endl;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << kurang [i][j] << " ";
        }
        cout << endl;
    }
}


int main (){
    int a;
    int b;
    matriks A;
    matriks B;
    operasi tambah;
    operasi kurang;
   
    cinBaris (a, b);
    cinElemenA (a, b, A);
    cinElemenB (a, b, B);
    jumlahAB (A, B, a, b, tambah);
    kurangAB (A, B, a, b, kurang);
    coutJumlah (a, b, tambah);
    coutKurang (a, b, kurang);





}