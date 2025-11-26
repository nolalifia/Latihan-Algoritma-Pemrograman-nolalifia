#include <iostream>
using namespace std;

int main (){

    int n;
    cin >> n;
    int array [n];
    int a = n - 1;

    int k;
    cin >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> array [i];
    }

    cout << "[";

    for (int i = n-k; i < n; i++)
        {
            cout << array [i] << ", ";
        }



        for (int i = 0; i < n-k; i++)
        {
            if (i < n-k-1)
            {
                cout << array [i] << ", ";
            }
            else
            {
                cout << array [i] << "]" << endl;
            }
        }



    /*    for (int j = 0; j < k; j++)
    {
        for (int i = 0)
        {
            cout << "rotate " << j+1 << "steps to the right: ["  << array [i] << endl;
            if (array [i] == array [n-1])
            {
                int tempat = array [0];
                array [0] = array [n-1];
            }
            else 
            {
                array [i] = array [i + 1];
            }
        }
    }
*/

}