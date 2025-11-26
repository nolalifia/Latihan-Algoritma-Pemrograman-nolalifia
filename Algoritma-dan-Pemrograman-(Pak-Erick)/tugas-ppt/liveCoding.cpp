#include <iostream>
using namespace std;

void insertionSort (int array [], int n) {
    int i, j, tempat;
    for (i = 1; i < n; i++) {
        j = i;
        while (j > 0 && array [j - 1] > array [j]) {
            tempat = array [j];
            array [j] = array [j-1];
            array [j-1] = tempat;
            j--;
        }
    }
}

void TampilkanArray (int array [], int n){

    for (int i = 0; i < n; i++) {
        cout << array [i] << " ";
    }
    cout << endl;
}

int main (){

    int n;
    cout << "Masukan panjang array: ";
    cin >> n;

    int array [n];

    cout << "Masukan elemen array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> array [i];
    }

    cout << "Sebelum: ";
    TampilkanArray (array, n);

    insertionSort (array, n);

    cout << "Sesudah: ";
    TampilkanArray (array, n);

}