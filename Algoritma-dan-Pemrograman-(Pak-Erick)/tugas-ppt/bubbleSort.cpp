#include <iostream> 
using namespace std;

void tukar (int &a, int &b){
    int tempat = a;
    a = b;
    b = tempat;
}

void bubbleSort (int arr [], int n){
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-i-1; j++){
            if (arr [j] > arr [j+1]){
                tukar (arr [j], arr [j+1]);
            }
        }
    }

    cout << "Sesudah: ";
    for (int i = 0; i < n; i++){
        cout << arr [i] << " ";
    }

    cout << endl;
}

int main (){

    int n;
    cout << "Masukan jumlah array: ";
    cin >> n;
    int arr [n];

    for (int i = 0; i < n; i++){
        cin >> arr [i];
    }

    cout << "Sebelum: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr [i] << " ";
    }
    cout << endl;

    bubbleSort (arr, n);

}