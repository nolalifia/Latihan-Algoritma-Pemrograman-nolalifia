#include <iostream>
using namespace std;

int main (){

    int x = 5;
    int *p = &x;
    int **pp = &p;

    cout << &x << " " << x << endl
         << &p << " " << *p << endl
         << &*pp << " " << **pp << endl;
}