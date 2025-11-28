#include <iostream>
using namespace std;

void swap_pointer (int *a, int *b){

    int tempat;
    tempat = *a;
    *a = *b;
    *b = tempat;
}

int main (){

    int x;
    int y;

    cout << "Masukan nilai x: ";
    cin >> x;

    cout << "Masukan nilai y: ";
    cin >> y;

    cout << "nilai x sebelum diubah adalah " << x << endl
         << "nilai y sebelum diubah adalah " << y << endl;

    swap_pointer (&x, &y);

    cout << endl << "nilai x sesudah diubah adalah " << x << endl
         << "nilai y sesudah diubah adalah " << y << endl;

}