#include <iostream>
using namespace std;

void cinAngka (int &n, int baris[])
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> baris [i];
    }
}


void coutAngka (int n, int baris [])
{
    int total [n];

    total [0] = baris [0];
    for (int i = 1; i < n; i++)
    {
        total [i] = total [i-1] + baris [i];
    }

    cout << "[";
    for (int i = 0; i < n; i++)
    {
        if (i != n-1)
        {
            cout << total [i] << ", ";
        }
        else
        {
            cout << total [i] << "]" << endl;
        }
    }

}



int main (){

    int n;
    int baris [n];

    cinAngka (n, baris);
    coutAngka (n, baris);
}
