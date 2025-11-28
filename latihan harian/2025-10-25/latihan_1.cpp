#include <iostream>
using namespace std;

typedef char step [100];

void cinLangkah (int &x, int &y, int &n, step langkah)
    {
        cin >> x;
        cin >> y;
        cout << "Masukan langkah: ";
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> langkah [i];
        }
    }

void hitungLangkah (int x, int y, int n, step langkah)
{

    for (int i = 0; i < n; i++)
    {
        if (langkah [i] == 'U')
        {
            y++;
        }
        else if (langkah [i] == 'D')
        {
            y--;
        }
        else if (langkah [i] == 'L')
        {
            x--;
        }
        else
        {
            x++;
        }
    }

    cout << x << " " << y << endl;
}
int main (){

    int x, y, n;
    step langkah;

    cinLangkah (x, y, n, langkah);
    hitungLangkah (x, y, n, langkah);

}