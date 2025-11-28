#include <iostream>
using namespace std;

void cinAngka (int &n, int baris [])
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> baris [i];
    }
}

void coutAngka (int n, int baris [])
{
    // yang genap maju
    bool cek = false;
    for (int i = 0; i < n; i++)
    {
        if (baris [i] % 2 == 0)
        {
            if (!cek)
            {
                cout << "[" << baris [i];
                cek = true;
            }
            else
            {
                cout << ", " << baris [i];
            }
        }
    }


    // yang engga mundur
    for (int i = 0; i < n; i++)
    {
        if (baris [i] % 2 != 0)
        {
            cout << ", " << baris [i];
        }
    }

    cout << "]" << endl;

}

int main (){

    int n;
    int baris [n];

    cinAngka (n, baris);
    coutAngka (n, baris);

}