#include <stdio.h>
int main(){

int ano;
int dia;
int mes;
int valordedeposito;
char nomedocliente;

printf("Digite o nome do cliente: \n");
scanf("%s", &nomedocliente);

printf("\n\n Digite a data do deposito: \n");
scanf("%d", &dia, "%d", &mes, "%d", &ano) ;

printf("\n\n Digite o valor do deposito: \n");
scanf("%d", &valordedeposito);

printf("\n\n O ano é %d", ano);

	return 0;
}
