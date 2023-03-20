#include <stdio.h>
int main()
{
int a;
printf("inserisci un numero");
scanf("%d", &a);

if(a>50)
{
    a/=2;
    printf("il mio valore è %d\n", a);
} 


else
{
   a*=3;
    printf("il mio valore è %d\n", a);
}

}