#include <iostream>
using namespace std;

   void cinAngka (int n, int baris [])
   {
        for (int i = 0; i < n; i++)
        {
            cin >> baris [i];
        }
   }


   void coutAngka (int n, int baris [])
   {
        int max = baris [0];

        for (int i = 0; i < n-1; i++)
        {
            for (int j = 1; j < n; j++)
            {
                if (i != j)
                {
                    int operasi = (baris [i] - 1) * (baris [j] - 1);
                    if (max < operasi)
                    {
                        max = operasi;
                    }
                }
            }
        }

        cout << endl << max << endl;
   }


int main (){

    int n;
    cin >> n;
    int baris [n];

    cinAngka (n, baris);
    coutAngka (n, baris);

}