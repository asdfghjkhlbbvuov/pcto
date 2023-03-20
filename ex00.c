//craere una variabile di tipo float, inizializzarla ad un valore a vostra scelta
//stampare la variabile
// partendo da questo esercizio aggiungere 2 variabili di tipo char e stamparle nello stesso printf in cui stampate il float
// aggiungi una variabile di tipi int, inizializza e stampa nello stesso printf di prima ma con %c. COSA SUCCEDE?
#include <stdio.h>
int main()
{
float x = 3; // flag : %f
char e = 'E';
char l = 'L';
int intero = 72;
printf("ho creato una variabile float %f, il primo carttere %c, il secondo carattere %c, il terzo carattere è con variabile int %c\n", x, e, l, intero);
}
