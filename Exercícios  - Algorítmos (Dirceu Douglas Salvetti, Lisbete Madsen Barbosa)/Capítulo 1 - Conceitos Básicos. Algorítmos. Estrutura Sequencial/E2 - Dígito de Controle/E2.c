// Objetivo: Exercício E2: Dado um número de 3 algarismos construir outro número de quatro algarismos de acordo com a seguinte regra:
// a) os três primeiros algarismos, contados da esquerda para a direita são iguais aos do número dado;
// b) o quarto algarismo é um dígito de controle calculado da seguinte forma: (primeiro algarismo*3) + (terceiro algarismo *5); 
// o dígito de controle é igual ao resto da divisão dessa soma por 7.
// Entrada: a (int)
// Saída: b (int)

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int a=0, b=0;
	
	printf("Digite um número inteiro de 3 algarismos:\n");
	scanf("%d",&a);
	
	b= (a*10)+(((a/100)+((a%100)/10)*3 + (a%10)*5)%7);
	
	printf("\n %d \n",b);
	
	system("PAUSE");
	return 0;
	
	
}
