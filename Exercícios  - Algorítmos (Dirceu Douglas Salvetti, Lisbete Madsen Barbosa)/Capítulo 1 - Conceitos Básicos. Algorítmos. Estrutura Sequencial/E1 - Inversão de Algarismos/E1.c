// Objetivo: Exercício E1: Dado um número inteiro de 3 algarismos, inverter a ordem de seus algarismos. Os três algarismos do número dado são diferentes de 0.
// Entrada: a (int)
// Saída: b (int)

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int a=0, b=0;
	
	printf("Digite um número inteiro de 3 algarismos:\n");
	scanf("%d",&a);
	
	b = (a%10)*100;
	b = b + (a%100)-(a%10);
	b = b + (a/100);
	
	printf("\n %d \n",b);
	system("PAUSE");
	return 0;
}
