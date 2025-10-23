#include <iostream>
using namespace std;

int main (){
    int n = 9;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ( i + 4 == j || j == 5 || i + j == 14 || i == 5 || i + j == 6 || i == j + 4)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }

        }
        cout << endl;
    }
}