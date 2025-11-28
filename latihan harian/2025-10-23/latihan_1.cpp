#include <iostream>
using namespace std;


void palindrome (string huruf)
{
    int n = huruf.length();
    bool palindrome = false;
    for (int i = 0; i < n/2; i++)
    {
        if (huruf [i] == huruf [n-i-1])
        {
            palindrome = true;
        }
    }

    if (palindrome == true)
    {
        cout << huruf << " merupakan kata palindrome" << endl;
    }
    else
    {
        cout << huruf << " bukan kata palindrome." << endl;
    }
}


int main (){

    string huruf;
    cin >> huruf;

    palindrome (huruf);



}