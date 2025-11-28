#include <iostream>
using namespace std;

void cinAngka (int &n, int angka [])
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> angka [i];
    }

}

void coutAngka (int n, int angka [])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (i % 2 == 0)
            {
                if (angka [i] > angka [j])
                {
                    int tempat = angka [i];
                    angka [i] = angka [j];
                    angka [j] = tempat;
                }
            }
            else
            {
                if (angka [i] < angka [j])
                {
                    int tempat = angka [i];
                    angka [i] = angka [j];
                    angka [j] = tempat;
                }
            }
        }

        cout << angka [i] << " ";

    }
       cout << endl;
}


int main (){

    int n;
    int angka [n];

    cinAngka (n, angka);
    coutAngka (n, angka);

}