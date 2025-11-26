/*
Nama Program :
Nama         :
NPM          :
Tanggal Buat :
Deskripsi    :
*/

#include <iostream>
using namespace std;

void gea (string nama)
{
    cout << nama << " keren" << endl;
}

int main ()
{
string nama; 
string bias;

cout << "nama kamu siapa? ";
getline(cin,nama);
cout  << "kamu suka siapa? ";
getline (cin, bias);

gea(nama);
cout << nama << " suka " << bias << endl;
}