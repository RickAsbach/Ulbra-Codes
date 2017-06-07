#include<stdio.h>
#include<conio.h>

main()
{
float sal, media, total;
int x=0;
char resp;

printf("\n Utiize o programa para calcular o salario medio dos colaboradores\n");


do{
	printf("\nDigite o salario do funcionario: ");
	scanf("%f", &sal);
	x++;
	printf("\n\nGostaria de adicionar outro salario ao calculo? digite (s) para sim e (n) para nao: ");
	fflush(stdin);
	total=sal+total;
	scanf("%c", &resp);	
		}while(resp=='s');		
		
		media=total/x;	
			printf("\nvalor media salarial %.2f ", media);
			
	}

