#include <stdio.h>
#include <math.h>

int main(){
	float altura, peso, imc;
	
	printf("Bem vindo a calculadora de IMC da MRNBC!\n Insira a sua altura(em metros):\n");
	scanf("%f", &altura);
	printf("Agora, insira seu peso (em kg):\n");
	scanf("%f", &peso);
	
	imc = peso / (altura*altura);
	
	printf("Seu IMC eh %.1f", imc);
	
	if(imc<18.5){
		printf("\nvoce esta abaixo no peso!!");
	}
	else if(imc>= 16.6 && imc<=24.9){
		printf("\nparabens! voce esta saudavel!");
	}
	else if(imc>= 25 && imc<= 29.9){
		printf("\nvoce esta acima do peso.");
	}
	else if(imc>= 30 && imc<= 34.9){
		printf("\nALERTA! voce esta acima do peso, grau de obesidade I !");
	}
	else if(imc>= 35 && imc<= 39.9){
		printf("\nALERTA!! voce esta acima do peso, grau de obesidade servera (II)!!");
	}
	else if(imc>=40){
		printf("\nALERTA!!! voce esta acima do peso, grau de obesidade morbida (III)!!!");
	}
	
	return 0;	
}
