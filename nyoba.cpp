#include <iostream>
using namespace std;
int main (){

    int x = 8;
    int* refX = &x;

    
    cout << x << " " << refX << "\n";
    refX += 2;
    cout << x << " " << refX << "\n";

}