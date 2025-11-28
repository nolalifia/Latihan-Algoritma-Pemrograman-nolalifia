#include <iostream>
using namespace std;

int main()
{
    int varA = 10;
    int varB = 20;

    int *p1; // Pointer 1
    int *p2; // Pointer 2
    int *p3; // Pointer 3

    p1 = &varA; 

    cout << varA << " " << &varA << endl; // 10  & alamat A
    cout << p1 << " " << *p1 << " " << &p1 << endl; // alamat A & 10 & alamat p1

    *p1 = 15;

    cout << varA << " " << *p1 << endl; // 15 & 15

    p2 = p1; // p2 disalin nilainya dari p1. Ke mana p2 menunjuk?

    cout << p1 << " " << *p1 << endl; // alamat A & 15
    cout << p2 << " " << *p2 << endl; // alamat A & 15
    cout << &p1 << " " << &p2 << endl; // alamat p1 & alamat p2

    *p2 = 25;

    cout << varA << endl; // 25
    cout << *p1 << endl; // 25
    cout << *p2 << endl; // 25

    p1 = &varB; // p1 dipindahkan agar menunjuk ke varB. Bagaimana dengan p2?

    cout << p1 << "  " << *p1 << endl; // alamat varB & 20
    cout << p2 << "  " << *p2 << endl; // alamat varA & 25
    cout << varA << "  " << varB << endl; // 25 & 20

    p3 = &varB; // p3 juga menunjuk ke varB

    cout << p3 << " " << & (*p3) << endl; // alamat varB & alamat varB
    cout << &varB << endl; // alamat varB

    return 0;
}