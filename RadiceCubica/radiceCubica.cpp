// Includo le direttive

#include <iostream>
#include <cmath>

using namespace std;

// Funzione principale(main)

int main() {

    // Dichiarazione variabili utili al programma

    int num;
    int risultato;

    // Inserimento numero

    cout << "Inserisci numero: ";
    cin >> num;

    // Risultato

    risultato = cbrt(num);
    cout << "\nRisultato: " << risultato;
    
}