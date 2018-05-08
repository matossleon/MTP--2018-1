//Aluno: Leonardo Matos
//Matrícula: 11721EBI021

#include <stdio.h>

int main()
{
	char caracteres[256];
	int i,j,numerico[256],cont=0;
	printf("Digite a sequencia de caracteres: ");
	scanf("%s", caracteres);
	for(i=0, j=0; caracteres[j]; i++, j++)
	{
		while (!(caracteres[j] >='0' && caracteres[j] <='9'))
		{	j++;	
		if(!(caracteres[j]))
		break;
		}	
		if(caracteres[j])
		{	numerico[i] = caracteres[j] - '0';
			cont++;		}
	}
	if (cont>0)
	{
		for(i=0; i<cont; i++)
		printf("%d", numerico[i]);
	}
	else printf("0");
	return 0;
}
