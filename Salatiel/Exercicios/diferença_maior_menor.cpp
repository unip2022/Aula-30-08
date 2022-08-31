#include <stdio.h>
#include <stdlib.h>

int main()
{
    // declaração de variaveis
  	int n1;
  	int n2;
  	int result; 
  	
  	// entrada
  	printf("Digite o valor do primeiro numero : ");
	scanf("%d", &n1);
  	printf("Digite o valor do segundo numero : ");
	scanf("%d", &n2);
  	
  	// processamento 
  	if (n1 > n2)
  	{
  		result = n1 - n2; 
    }
  	else 
  	{
	    result = n2 - n1;
  	}
  	
  	// saida 
  	printf("O Resultado da diferença do maior numero pelo menor e : %d", result); 
  	return 0; 
  		
	
	
}

