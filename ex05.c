#include <stdio.h>
int main()
{
int a;
printf("inserisci la tua età");
scanf("%d", &a);
printf("a: %d\n", a);

if(a>18)
{
   printf("sei maggiorenne"); 
}

else
{
    printf("sei minorenne");
}

}