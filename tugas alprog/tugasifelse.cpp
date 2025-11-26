#include <iostream>
using namespace std;

int main(){
int nilai;
cin >> nilai;

if (nilai > 80){
    cout << "IP Saya A" << endl;
} else if (nilai > 65){
    cout << "IP Saya B" << endl;
} else if (nilai > 50){
    cout << "IP Saya C" << endl;
} else {
    cout << "IP Saya E" << endl;
}

}