#include <iostream>
using namespace std;

int main (){
    string kata;
    cin >> kata;
    int n = kata.length();

    for (int i = 0; i < n/2; i++)
    {
            char tempat;
            tempat = kata [i];
            kata [i] = kata [n - 1 - i];
            kata [n - 1 - i] = tempat;

    }

    cout << kata << endl;
}