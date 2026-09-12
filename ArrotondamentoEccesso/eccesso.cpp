// Includo le direttive

#include <iostream>
#include <cmath>

using namespace std;

// Funzione principale(main) 

int main() {

    // Dichiarazione variabili utili al programma

    float num;
    float risultato;

    // Inserimento primo numero

    cout << "\nInserisci il numero: ";
    cin >> num;

    // Risultato

    risultato = ceil(num);
    cout << "\nArrotondamento: " << risultato;

}