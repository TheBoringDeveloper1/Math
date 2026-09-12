// Includo le direttive

#include <iostream>
#include <cmath>

using namespace std;

// Funzione principale(main)

int main() {

    // Dichiarazione variabili utili al programma

    float num;
    float risultato;

    // Inserimento numero

    cout << "Inserisci il numero: ";
    cin >> num;

    // Risultato

    risultato = round(num);
    cout << "\nRisultato: " << risultato;
    
}