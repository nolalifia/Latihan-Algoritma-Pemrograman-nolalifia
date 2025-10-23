#include <iostream>
using namespace std;

int main() {

    string nama;
    cin >> nama;
    int n = nama.length();
    bool palindrome = true;

        for (int i = 0; i < n/2; i++)
        {
            if (nama [i] != nama [n-i-1])
            {
                palindrome = false;
                break;
            }
        }

        if (palindrome)
        {
            cout << nama << " merupakan kata palindrome." << endl;
        }
        else 
        {
            cout << nama << " bukan merupakan kata palindrome." << endl;
        }



}