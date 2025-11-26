/*
mulai: 06.55
berhenti: 7.15
*/

#include <iostream>
using namespace std;

typedef int matriks [10][3];

void inputNilai (matriks A)
{
    // input nilai
    cout << "=== Program Nilai Mahasiswa ===" << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << "Masukan Nilai Mahasiswa ke-" << i+1 << ": " << endl;

            for (int j = 0; j < 3; j++)
            {
                cout << "Nilai mata kuliah " << j+1 << " = ";
                cin >> A [i][j];
            }

            cout << endl;
        }
}

void tampilNilai (matriks A)
{
    // data mahasiswa
    cout << "Data Nilai Mahasiswa: " << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << "Mhs" << i+1 << " : ";

            for ( int j = 0; j < 3; j++)
            {
                if (j < 2)
                {
                    cout << A [i][j] << " ";
                }
                else
                {
                    cout << A [i][j] << endl;
                }
            }
        }
}

void Rata (matriks A, float rata [3])
{
    // rata rata;
        cout << "Rata-rata Nilai Mahasiswa: " << endl;
        for (int i = 0; i < 3; i++)
        {
            float total = 0;
            for (int j = 0; j < 3; j++)
            {
                total += A [i][j];
            }

            rata [i] = total/3;
            cout << "Mahasiswa "<< i+1 << " : " << rata [i] << endl;
        }

}
int main (){
    matriks A;
    float rata [3];

    inputNilai (A);
    tampilNilai (A);
    cout << endl;
    Rata (A, rata);
    cout << endl;


}