#include <iostream>
/* iteracje */
//	PÊTLA WHILE - PRZYK£AD 2
using namespace std;
int main() {
    int suma = 0;
    int zakres;
    int i = 1;
    cout << "Podaj zakres: ";
    cin >> zakres;
    while (i <= zakres) {
        suma = suma + i;
        i++;
    }
    cout << "Suma z petli WHILE = " << suma << endl;
    return 0;
}


