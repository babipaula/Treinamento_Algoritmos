// Objetivo: Dadas duas frações ordinárias a/b e c/d, determinar a sua soma e o seu produto.
// Entrada: a, b,c e d (a/b e c/d)
// Saída: f,g,h,i,produto,soma(f/g e h,i)

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float a=0,b=0,c=0,d=0,f=0,g=0,h=0,i=0;
	float produto, soma;
	
	printf("Digite a fracao n.1, no formato a/b: \n");
	scanf("%f%*c%f", &a,&b); // %*c indica que a '/' deve ser lida (como caractere simples), porém não deve ser armazenada.
	
	printf("\nDigite a fracao n.2, no formato c/d: \n");
	scanf("%f%*c%f", &c,&d);
	
	//Calculando a soma:
	f = (a*d)+(c*b);
	g = b*d;
	soma = f/g;
	
	//Calculando o produto:
	h = a*c;
	i = g;
	produto = h/i;
	 
	//Imprimindo:
	printf("\n A soma das fracoes: %.0f/%.0f, ou %.2f",f,g,soma );
	printf("\n O produto das fracoes: %.0f/%.0f, ou %.2f\n",h,i, produto);
		
	system("PAUSE");
	return 0;
	
	
	
}
