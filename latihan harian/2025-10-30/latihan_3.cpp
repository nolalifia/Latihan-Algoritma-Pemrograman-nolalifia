#include <iostream>
using namespace std;

void coutKalimat (int longkap, string kalimat)
{
    int n = kalimat.length();
    for (int i = 0; i < n; i++)
    {
        if (kalimat [i] != ' ')
        { 
            kalimat [i] = kalimat [i] + longkap;
        }
        else {}
    }

    cout << kalimat << endl;

}
int main (){

    int longkap;
    string kalimat;
    getline (cin, kalimat);
    cin >> longkap;

    coutKalimat (longkap, kalimat);

}