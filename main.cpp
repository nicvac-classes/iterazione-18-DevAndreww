#include <iostream>
using namespace std;

int main() 
{
    int i, k;
    float media, livello, somma;

    i = 1;
    k = 0;
    somma = 0;
    while (i <= 7) {
        cout << "Quant'è il livello dell'acqua?" << endl;
        cin >> livello;
        if (livello > 10) {
            cout << "L'acqua nel giorno " << i << " supera i 10 cm." << endl;
            k = k + 1;
        }
        somma = somma + livello;
        media = somma / 7;
        i = i + 1;
    }
    if (media >= 10) {
        cout << "Il livello medio dell'acqua è alto" << endl;
    }
    if (media <= 0) {
        cout << "Il livello medio dell'acqua è normale" << endl;
    }
    cout << "L'acqua è maggiore di dieci, " << k << " volte, e la media è di " << media << "cm." << endl;

}
 