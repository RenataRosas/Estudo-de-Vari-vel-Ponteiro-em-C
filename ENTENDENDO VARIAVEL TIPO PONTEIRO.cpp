#include <stdio.h>

/*
ENTENDENDO VARIAVEIS DO TIPO PONTEIRO
Vari�veis do tipo ponteiro s�o usadas exclusivamente para armazenar endere�os de mem�ria. 
O acesso � mem�ria � feito usando dois operadores: 
o asterisco (*), utilizado para declara��o do ponteiro, 
e o �&�, que, como j� vimos, � usado para acessar o endere�o da mem�ria, por isso � chamado de operador de refer�ncia. 
A sintaxe para criar um ponteiro tem como padr�o:
<tipo> *<nome_do_ponteiro>;
Exemplo: int *idade;

*/

int main(){
nt num[2] = {10, 20};
	printf("\n Utilizando �ndice do vetor: %d", num[0]);
    printf("\n Utilizando ponteiro: %d", *num);
	return 0;
}
