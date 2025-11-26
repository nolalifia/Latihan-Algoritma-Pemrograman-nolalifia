#include <iostream>
#include <iomanip>
using namespace std;
int main (){

string tempatKode [10] = { "B:DO", "B:DC", "D:D", "D:A", "M:DO", "D-B", "O-B",  "R:U", "R:U-d", "D:U" };
string tempatNama [10] = { "BORDER : DAY ONE", "BORDER : CARNIVAL" , "DIMENSION : DILEMMA" , "DIMENSION : ANSWER", 
                            "MANIFESTO : DAY ONE", "DARK BLOOD", "ORANGE BLOOD", "ROMANCE : UNTOLD", "ROMANCE : UNTOLD -daydream-", "DESIRE ; UNLEASH" };
int tempatHarga [10] = {214000, 239000, 220000, 252000, 263000, 235000, 270000, 200000, 288000, 320000};
int tempatStok [10];

for (int i = 0; i < 10; i++){ tempatStok[i] = 2; }

    cout << "\n" << "\t\t=== ENHYPEN WEVERSE OFFICIAL SHOP ===\n" << endl;
    cout << setw (10) << "kode" << setw (25) << "nama barang" << right << setw (26) << "harga \n" << endl;
    for (int i = 0; i < 10; i++) {

        cout << setw (10) << tempatKode [i] << setw (30) << tempatNama [i] << right << setw (20) << tempatHarga [i] << endl;

    }



}