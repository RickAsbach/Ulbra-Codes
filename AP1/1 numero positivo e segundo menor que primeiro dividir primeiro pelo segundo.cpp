#include <stdio.h>
#include <conio.h>

main ()
{

float n1, n2, resul;

do{
printf("\nDigite o primeiro valor: ");
scanf("%f", &n1);
}while(n1<=0);

do{
printf("\nDigite o segundo valor: ");
scanf("%f", &n2);
}while(n2>n1 || n2==0);

resul=n1/n2;
printf("\nOresultado e: %.2f", resul);



}

