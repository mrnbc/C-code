#include <stdio.h>
#include <stdlib.h>

char name[]=" ";
char grade;

int main(){
	
	printf("Ola, Bem-vindo ao THE GAME\n");
	printf("Insira seu nome:\n");
	scanf("%s", &name);
	
	printf("Mais um dia, as 7:30 da manha. Uma quarta-feira nublada, onde eh possivel sentir o vento gelado tocar o seu rosto. Buscando fugir do frio da manha, voce adentra em uma loja, com um leve calor e odor fescro de cafe, o sino toca, sinzaliando ao balconista que o(a) fiel cliente de todas as manhas, chegou.\n");
	printf("O que deseja, Sr(a) %s ?\n", name);
	printf("A)cafe\n");
	printf("B)cafe com leite\n");
	printf("C)cappuccino\n");
	
	scanf("%s", &grade);
	
	switch(grade){
	case 'A' :
		printf("Muito bem, aqui esta seu cafe. Otima escolha para uma rotina pesada.\n");
		break;
	case 'B' :
		printf("Muito bem, aqui esta seu cafe com leite.\n");
		break;
	case 'C' :
		printf("Muito bem, aqui esta seu cappuccino. \n");
		break;	
	default:
		printf("Nao temos essa opcao no cardapio. \n");
	}
	
	
	
	
	return 0;
}

