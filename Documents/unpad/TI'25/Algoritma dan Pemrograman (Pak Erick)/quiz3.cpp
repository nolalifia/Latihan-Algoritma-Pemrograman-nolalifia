#include <iostream>
using namespace std;

int main ()
{

    int sisa = 0;
    int hasil = 0;
    int n;
    cin >> n;
        while (n != 0)
        {
            sisa = n % 10;
            hasil = hasil * 10 + sisa;
            n = n/10;
        }
    cout << hasil << endl;
}