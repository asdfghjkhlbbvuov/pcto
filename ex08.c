#include <stdio.h>

float main()
{
    float x;

    printf("inserisci una temperatura gradi Celsius");
    scanf("%f", &x);
   
   if(x<-273.15)
   {
    printf("impossibile");
   }
else 
{
float b = x+273.15;
printf("la temperatura kelvin è %f\n", b);
float c = x*1.8+32;
printf("la temperatura Fahrenheit è %f\n", c);
}
}