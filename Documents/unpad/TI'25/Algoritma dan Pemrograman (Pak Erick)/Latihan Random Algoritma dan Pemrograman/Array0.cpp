#include <iostream>
using namespace std;
int main (){

    int n;
    cin >> n;
    int arr [n];
    bool first = true;

    for (int i = 0; i < n; i++)
    {
        cin >> arr [i];
    }

    cout << "[";

    for (int i = 0; i < n; i++)
    {
        if (arr [i] != 0)
        {
            if (!first)
            {
                cout << ", ";
            }
            cout << arr [i];
            first = false;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr [i] == 0)
        {
            if (!first)
            {
                cout << ", ";
            }
            cout << arr [i];
            first = false;
        }
    }

    cout << "]" << endl;
}