#include <iostream>
using namespace std;

int main() {
    int jantan [4] = {0, 10, 50, 60};
    int betina [4] ={ 7, 80, 9, 40};
    int total1;
    int total2;
    int total3;
    int hari;
    int keseluruhan = 0;

    for (int i = 0; i < 4; i++)
    { 
        total1 = 0; total2 = 0; total3 = 0; keseluruhan = 0;
        
            if (jantan [i] < 10)
                {
                    total1 += 100000 * jantan [i];
                }
            else if (jantan [i] >= 10 && jantan [i] <= 50)
                {
                    total2 += 75000 * jantan [i];
                }
            else if (jantan [i] > 50)
                {
                    total3 += 50000 * jantan [i];
                }
           
            
            if (betina [i] < 10)
                {
                    total1 += 100000 * betina [i];
                }
            else if (betina [i] >= 10 && betina [i] <= 50)
                {
                    total2 += 75000 * betina [i];
                }
            else if (betina [i] > 50)
                {
                    total3 += 50000 * betina [i];
                }
        
        keseluruhan += total1 + total2 + total3;
        cout << keseluruhan << endl;
    }
}