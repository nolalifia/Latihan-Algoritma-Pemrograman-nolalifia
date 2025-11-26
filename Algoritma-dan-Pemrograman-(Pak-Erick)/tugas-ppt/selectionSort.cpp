#include <iostream>
using namespace std;

void selectionSort (int arr [], int n) {

    for (int i = 0; i < n-1; i++)
    {
        int minIndex = i;
        for (int j = 0; j < n; j++) {
            if (arr [j] < arr [minIndex])
            {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int tempat;
            tempat = arr [i];
            arr [i] = arr [minIndex];
            arr [minIndex] = tempat;
        }
    }
}

int main (){

    int n;
    cin >> n;
    int arr [n];

    cout << "Sebelum: ";
    for (int i = 0; i < n; i++) {

        
    }
}