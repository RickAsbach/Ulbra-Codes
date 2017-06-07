#include <stdio.h>
#include <conio.h>
main ()
{
char tecla;
do{
printf("\nDigite uma letra: ");
fflush(stdin);
scanf("%c", &tecla);
}while(tecla!='w');
}

