//Aluno: Leonardo Matos Silva
//Matrícula: 11721EBI021

#include <stdio.h>

int funcao_ackerman(int, int);

int main()
{	int m, n;
	printf("\n\tDigite o valor de m: "); scanf("%d", &m);
	printf("\tDigite o valor de n: "); scanf("%d", &n);
	printf("\n\tResultado: %d ", funcao_ackerman(m, n));
	return 0;
}

int funcao_ackerman(int m, int n)
{	
	if(m==0) 
		return n + 1;
	else if(m > 0 && n==0)
		funcao_ackerman(m-1, 1);
	else funcao_ackerman(m - 1, funcao_ackerman(m, n - 1));
}
