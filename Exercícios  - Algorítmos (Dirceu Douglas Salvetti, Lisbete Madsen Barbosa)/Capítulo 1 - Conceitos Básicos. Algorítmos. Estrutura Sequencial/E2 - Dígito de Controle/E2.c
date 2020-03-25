// Objetivo: Exerc�cio E2: Dado um n�mero de 3 algarismos construir outro n�mero de quatro algarismos de acordo com a seguinte regra:
// a) os tr�s primeiros algarismos, contados da esquerda para a direita s�o iguais aos do n�mero dado;
// b) o quarto algarismo � um d�gito de controle calculado da seguinte forma: (primeiro algarismo*3) + (terceiro algarismo *5); 
// o d�gito de controle � igual ao resto da divis�o dessa soma por 7.
// Entrada: a (int)
// Sa�da: b (int)

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int a=0, b=0;
	
	printf("Digite um n�mero inteiro de 3 algarismos:\n");
	scanf("%d",&a);
	
	b= (a*10)+(((a/100)+((a%100)/10)*3 + (a%10)*5)%7);
	
	printf("\n %d \n",b);
	
	system("PAUSE");
	return 0;
	
	
}
