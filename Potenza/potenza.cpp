// Includo le direttive

#include <iostream>
#include <cmath>

using namespace std;

// Funzione principale(main)

int main() {

    // Dichiarazione variabili utili al programma

    int num1;
    int num2;

    int risultato;

    // Inserimento base

    cout << "Inserisci la base: ";
    cin >> num1;

    // Inserimento esponente

    cout << "\nInserisci l'esponente: ";
    cin >> num2;

    // Risultato

    risultato = pow(num1,num2);
    cout << "\nRisultato: " << risultato;
    
}