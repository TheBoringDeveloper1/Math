// Includo le direttive

#include <iostream>
using namespace std;

// Funzione principale(main)

int main() {

    // Dichiarazione variabili utili al programma

    int num1;
    int num2;

    int risultato;
    int opz;

    // Menù principale

    cout << "--CalcolatriceBase--\n";
    cout << "\nOpzioni disponibili:";

    cout << "\n1: Addizione";
    cout << "\n2: Sottrazione";
    cout << "\n3: Moltiplicazione";
    cout << "\n4: Divisione\n";

    // Inserimento opzione

    cout << "\nInserisci opzione(1/4): ";
    cin >> opz;

    // Inserimento primo numero

    cout << "\nInserisci il primo numero: ";
    cin >> num1;

    // Inserimento secondo numero

    cout << "\nInserisci il secondo numero: ";
    cin >> num2;

    // Ciclo switch risultato

    switch(opz) {

        // Caso addizione

        case 1:

            // Risultato

            risultato = num1 + num2;
            cout << "\nRisultato: " << risultato;

            break;

        // Caso sottrazione

        case 2:

            // Risultato

            risultato = num1 - num2;
            cout << "\nRisultato: " << risultato;

            break;

        // Caso moltiplicazione

        case 3:

            // Risultato

            risultato = num1 * num2;
            cout << "\nRisultato: " << risultato;

            break;

        // Caso divisione

        case 4:

            // Risultato

            risultato = num1 / num2;
            cout << "\nRisultato: " << risultato;

            break;

        // Caso opzione inserita sbagliata

        default:

            cout << "\nRisultato non disponibile, opzione inserita errata";
            break;
        
    }

    return 0;
    
}