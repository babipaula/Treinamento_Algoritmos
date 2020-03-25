//Objetivo: Dado um número inteiro que representa um número binário de cinco dígitos, determinar o seu equivalente decimal.
//Entrada: bin (int).
//Saida: dec (int).

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int bin=0, dec=0, dec_div=0;
	
	printf("Digite o numero binario de 5 digitos: \n");
	scanf("%d",&bin);
	
	dec = dec+(bin%10);
	dec_div = bin/10;
	
	dec = dec + (dec_div%10)*2;
	dec_div = dec_div/10;
	
	dec = dec + (dec_div%10)*2*2;
	dec_div = dec_div/10;
	
	dec = dec + (dec_div%10)*2*2*2;
	dec_div = dec_div/10;
	
	dec = dec + (dec_div%10)*2*2*2*2;

	printf("Equivalente Decimal: %d \n",dec);
	
	system ("PAUSE");
	return 0;
}
