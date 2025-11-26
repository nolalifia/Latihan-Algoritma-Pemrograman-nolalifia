#include <iostream>
using namespace std;


int main (){

    int n;
    cin >> n;
    int angka [n];
    bool nums = false;

    for (int i = 0; i < n; i++)
    {
        cin >> angka [i];
    }

    for (int i = 0; i < n/2; i++)
    {
        for (int j = n/2; j < n; j++)
        {
            if (angka [i] == angka [j])
            {
                nums = true;
            }
            else if (angka [i] == angka [i + 1])
            {
                nums = true;
            }
            else {}
        }
    }

    if (nums == true)
    {
        cout << "true" << endl;
    }

    else
    {
        cout << "false" << endl;
    }

}