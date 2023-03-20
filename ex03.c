#include <stdio.h>
int main()
{
int y;
int x;
printf("inserisci due numeri");
scanf("%d %d", &x, &y );
printf("x: %d\ny: %d\n", x, y);
int somma = x + y;
int differenza = x - y;
int divisione = x/y;
int moltiplicazione = x*y;
int resto = x%y;
printf("la somma di x e y è %d\n", somma );
printf("la differenza di x e y è %d\n", differenza);
printf("la divisione di x e y è %d\n", divisione );
printf("la moltiplicazione di x e y è %d\n", moltiplicazione );
printf("il resto della divisione di x e y è %d\n", resto );

}