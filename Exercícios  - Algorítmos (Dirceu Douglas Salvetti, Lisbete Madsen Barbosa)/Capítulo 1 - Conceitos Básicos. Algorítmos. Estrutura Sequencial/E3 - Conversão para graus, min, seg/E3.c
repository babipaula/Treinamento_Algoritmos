//Objetivo: Exercício E3: Dado um número inteiro de segundos determinar o seu valor equivalente em graus, minutos e segundos.
//Se a quantidade de segundos for insuficiente para dar o valor em graus, o valor em graus deve ser zero. 
//A mesma observação continua válida em relação a minutos e segundos. Por exemplo: 3.600 segundos = 1 grau, 0 minutos, 0 segundos;
//3.500 segundos= 0 graus, 58 minutos, 20 segundos.
//Entrada: a
//Saida: grau, min, seg

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int a=0, grau=0, min=0, seg=0;
	
	printf("Digite um numero inteiro de segundos:\n");
	scanf("%d",&a);
	grau = a/3600;
	min = (a/60)-(grau*60);
	seg = a - (grau*3600) - (min*60);
	printf("%d grau(s), %d minuto(s), %d segundo(s).\n", grau,min,seg);
	
	system ("PAUSE");
	return 0;
	

}


