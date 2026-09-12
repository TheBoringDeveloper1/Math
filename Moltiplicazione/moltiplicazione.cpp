// Includo le direttive

#include <iostream>
using namespace std;

// Funzione principale(main) 

int main() {

    // Dichiarazione variabili utili al programma

    int num1;
    int num2;

    int risultato;

    // Inserimento primo numero

    cout << "Inserisci il primo numero: ";
    cin >> num1;

    // Inserimento secondo numero

    cout << "\nInserisci il secondo numero: ";
    cin >> num2;

    // Risultato

    risultato = num1 * num2;
    cout << "\nRisultato: " << risultato;
    
}