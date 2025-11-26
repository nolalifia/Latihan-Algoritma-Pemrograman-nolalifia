#include <iostream>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    int i;
    int j;
    int posisi = 0;
    for (int i = 1; i <= n; i++)
        {
            j = i % 3;

            if (j == 1)
            {
                posisi += 1;
            }

            if (j == 2)
            {
                posisi += 2;
            }
            if (j == 0)
            {
                posisi += 3;
            }

            if ( j != 0)
            {
                cout << "Langkah ke-" << i << ": lari " << j << " meter -> posisi " << posisi << endl;
            }
            else 
            {
                cout << "Langkah ke-" << i << ": lari " << j+3 << " meter -> posisi " << posisi << endl;
            }
        }
}