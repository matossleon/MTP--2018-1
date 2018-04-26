//Aluno: LEONARDO MATOS SILVA
//Matrícula: 11721EBI021

#include <stdio.h>

int main()
{
	int v[200], i, num;
	printf("Digite o numero de integrantes: ");
	scanf("%d", &num);
	for(i=2, v[0]=0, v[1]=1; i<num+2; v[i]=(v[i-1]) + (v[i-2]), printf("%d ",v[i-2]), i++){}
	return 0;
}
