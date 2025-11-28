#include <iostream>
using namespace std;

void cinAngka (int &n, int baris []){
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> baris [i];
    }
}

void coutAngka (int n, int baris []){

    for (int i = 0; i < n; i++){
        if (i == n-1){

            baris [i] = baris [i] + 1;

        } else {
            baris [i] = baris [i];
        }
    }

    cout << "[";
    for (int i = 0; i < n; i++){
        
        if (i != n - 1){

            cout << baris [i] << ", ";

        } else {

            cout << baris [i] << "]" << endl;

        }
    }
}
int main (){

    int n;
    int baris [n];

    cinAngka (n, baris);
    coutAngka (n, baris);

}