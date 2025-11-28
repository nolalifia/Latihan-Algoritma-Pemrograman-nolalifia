#include <iostream>
using namespace std;

void cinAngka (int &n, string baris[])
{
    for (int i = 0; i < n; i++)
    {
        cin >> baris [i];
    }
}

void coutAngka (int n, string baris [])
{
    int panjang;
    int genap = 0;

    for (int i = 0; i < n; i++)
    {
         panjang = baris [i].length();
        if (panjang % 2 == 0)
        {
            genap++;
        }

    }

    cout << endl << genap << endl;
}

int main (){

    int n;
    cin >> n;
    string baris [n];

    cinAngka (n, baris);
    coutAngka (n, baris);

}