//Objetivo: Dados o primeiro termo e a raz�o de uma progress�o aritm�tica, determinar a soma dos seus primeiros cinco termos.
//Entrada: a,r (int).
//Sa�da: b (int).

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int a=0, b=0,r=0, i=0;
	
	printf("Digite o primeiro termo da progressao aritmetica:\n");
	scanf("%d",&a);
	
	printf("\nDigite a raz�o da progressao aritmetica:\n");
	scanf("%d",&r);
	
	//primeiro elemento:
	i = a;	
	//soma:
	b = b+i;
	
	//segundo elemento:
	i = i+r; 
	//soma:
	b = b+i;
	
	//terceiro elemento:
	i = i+r;
	//soma:
	b = b+i;
	
	//quarto elemento:
	i = i+r;
	//soma:
	b = b+i;
	
	//quinto elemento:
	i = i+r;
	//soma:
	b = b+i;
	
	printf("\n A soma dos primeiros cinco termos: %d \n", b);
	
	system("PAUSE");
	return 0;
}
