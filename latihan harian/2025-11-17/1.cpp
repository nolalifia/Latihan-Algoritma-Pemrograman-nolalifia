#include <iostream>
using namespace std;
int main (){

    int x = 10;
    int* p = &x;

    cout << x << endl
         << &x << endl
         << p << endl
         << *p << endl;

}