#include <iostream>
using namespace std;

int main() {
    //dichiarazione
    int x, divisore, verificaprimo;
    cout<< "questo programma legge un numero intero maggiore di 1 e visualizza tutti i suoi divisori primi\n\n";
    do {
        cout << "inserire il numero da analizzare: ";
        cin >> x;
    } while (x <= 1);
    divisore = 2;
    verificaprimo = 1;
    //elaborazione
    while (divisore < x) {
        if (x % divisore == 0) {
            verificaprimo = 1;
            while (verificaprimo < divisore) {
                if (divisore % verificaprimo != 0)
                    cout<< "il numero è divisibile per " << divisore << ", che è primo";
                verificaprimo++;
            }
            divisore++;
        }
    }
}