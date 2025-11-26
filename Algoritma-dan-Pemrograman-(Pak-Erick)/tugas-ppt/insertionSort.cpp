#include <iostream>
using namespace std;

void insertionSort(int arr[], int panjang) {
    int i, j, tmp;
    for (i = 1; i < panjang; i++) {
        j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
            j--;
        }
    }
}

int main() {
    int n;
    cout << "Masukan panjang array: ";
    cin >> n;

    int arr[n];

    cout << "Masukan elemen array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Sebelum: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    insertionSort(arr, n);

    cout << "Sesudah: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
