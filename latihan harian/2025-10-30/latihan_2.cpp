#include <iostream>
using namespace std;

void hitung (string kalimat)
{
    int n;
    n = kalimat.length();
    int hasil = 1;

    for (int i = 0; i < n; i++)
    {
        if (kalimat [i] == ' ')
        {
            hasil++;
        }
    }

    cout << hasil << endl;
}


int main (){

    string kalimat;
    getline (cin, kalimat);

    hitung (kalimat);

}