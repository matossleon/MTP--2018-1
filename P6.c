//Aluno: Leonardo Matos Silva
//Matrícula: 11721EBI021

#include <stdio.h>

int somatorio(int*, int*);

float divisao(float, float);

int main ()
{
	int vetor[20], i=0, n, *p, *q;
	float f;
	do{
		printf("\n\tDigite um numero de 5 a 20 para definir a quantidade de numeros do vetor: "); 
		scanf("%d", &n); 
		}while(n<5 || n>20);
	for(i=0; i<n; i++) 
	vetor[i]=0;
	printf("\n\n\tDigite os valores do vetor:\n");
	for(i=0; i<n; i++)
	{
		printf("\n\t\tn%d: ", i+1); 
		scanf("%d", &vetor[i]);
	}
	p = vetor;	
	q = vetor+n-1;	
	i=n;
    f = (somatorio(p, q));
	printf("\n\n\tMedia = %.1f", divisao(i, f));
	return 0;
}

int somatorio(int *p, int *q)
{	return (*q) + ((q==p) ? 0 : somatorio(p, q-1));	}

float divisao(float p, float q)
{ return q/p; }
