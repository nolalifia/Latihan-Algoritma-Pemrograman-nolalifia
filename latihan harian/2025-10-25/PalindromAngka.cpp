#include <iostream>
using namespace std;


int main (){
    int angka;
    cin >> angka;
    int n = angka;
    int sisa = 0;
    int hasil = 0;

        while ( angka != 0)
        {
            sisa = angka % 10;
            hasil = hasil * 10 + sisa;
            angka = angka/10;
        }

   if ( hasil == n)
    {
        cout << "palindrome" << endl;
    }
   else
    {
        cout << "bukan palindrome" << endl;
    }


}