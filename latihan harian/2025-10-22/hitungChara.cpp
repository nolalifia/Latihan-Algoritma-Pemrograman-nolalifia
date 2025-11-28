#include <iostream>
#include <fstream>
using namespace std;


int main (){

    ifstream file ("lirik.txt");
    char s;
    char target;
    cin >> target;
    int hitung = 0;

    while (file.get(s)){
        // tolower buat ngekonversi huruf besar jadi huruf kecil, contoh input A --> kalo gapake tolower nanti outputnya A = 0 karena di lirik.txt gaada A besar, tp kalo pake tolower nanti dia jadi A = 52
        if (tolower (s) == tolower (target)){ 
            hitung++;
        }
    }

    cout << "Ada " << hitung << " Karakter " << target << " dalam lirik lagu 'Indonesia Raya' " << endl;
}