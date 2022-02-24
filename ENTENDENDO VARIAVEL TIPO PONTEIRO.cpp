#include <stdio.h>

/*
ENTENDENDO VARIAVEIS DO TIPO PONTEIRO
Variáveis do tipo ponteiro são usadas exclusivamente para armazenar endereços de memória. 
O acesso à memória é feito usando dois operadores: 
o asterisco (*), utilizado para declaração do ponteiro, 
e o “&”, que, como já vimos, é usado para acessar o endereço da memória, por isso é chamado de operador de referência. 
A sintaxe para criar um ponteiro tem como padrão:
<tipo> *<nome_do_ponteiro>;
Exemplo: int *idade;

*/

int main(){
nt num[2] = {10, 20};
	printf("\n Utilizando índice do vetor: %d", num[0]);
    printf("\n Utilizando ponteiro: %d", *num);
	return 0;
}
