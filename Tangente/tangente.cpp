// Includo le direttive

#include <iostream>
#include <cmath>

using namespace std;

// Funzione principale(main) 

int main() {

    // Dichiarazione variabili utili al programma

    double num;
    double risultato;

    // Inserimento numero

    cout << "Inserisci il numero: ";
    cin >> num;

    // Risultato

    risultato = tan(num);
    cout << "\nTangente: " << risultato;
    
}