#include <iostream>
using namespace std;


int main (){

    string kalimat;
    getline (cin, kalimat);
    int n = kalimat.length();
    int hasil = 0;

    for (int i = n-1; i > 0; i--)
    {
        if (kalimat [i] == ' ')
        {
            break;
        }
        else
        {
            hasil++;
        }
    }

    cout << hasil << endl;
}