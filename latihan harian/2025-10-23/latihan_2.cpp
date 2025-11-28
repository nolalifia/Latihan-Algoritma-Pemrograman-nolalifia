#include <iostream>
using namespace std;

typedef  int elemen [100];

void cinElemen (int &n, elemen A)
{
    cout << "Masukan jumlah elemen: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Masukan elemen ke-" << i+1 << ": ";
        cin >> A [i];
    }
}

void hitungElemen (int n, elemen A)
{
    for (int i = 0; i < n; i++)
    {
        int sudahCek = 0;
        int sama = 0;
        for (int j = 0; j < i; j++)
        {
            if (A [i] == A [j])
            {
                sudahCek++;
                break;
            }
            else {}
        }

        if (sudahCek == 1)
        {
            continue;
        }

        for (int j = i; j < n; j++)
        {
            if (A [i] == A [j])
            {
                sama++;
            }
        }

        cout << "Angka " << A [i] << " muncul " << sama << " kali." << endl;
    }
}

int main (){

    elemen A;
    int n;
    cinElemen (n, A);
    hitungElemen (n, A);


}