//Aluno: LEONARDO MATOS SILVA
//Matrícula: 11721EBI021

#include <stdio.h>
void charparaint(int n,int v[], char w[])
{
	int i;
	for(i=0; i<n; i++)
		v[i] = w[i] - '0';
	
}

int potencia(int expoente)
{
	int k, l;
	for(k=1,l=1; k<=expoente; l*=2, k++);
	return l;	
}

int medir(char v[])
{
	int i=0;
	for(i=0; v[i]; i++);
	return i;
}

int conta_base2(int num)
{
	int i=0,j,k;
	if (num%2==0 && num >0)
		i++;
	for (i, j=0; j<num; i++)
	{
		if (num%2==0)
			num = num/2;
		if (num%2==1)
			num--;
	}
	return i;
}

int main()
{
	int opcao,b,x,d;
	printf("\n\tBem vindo ao programa de conversao entre bases numericas!!!\n\n\t1. Binario para Decimal\n\t2. Binario para Hexadecimal"
	"\n\t3. Hexadecimal para Decimal\n\t4. Hexadecimal para Binario\n\t5. Decimal para Binario\n\t6. Decimal para Hexadecimal"
	"\n\t7. Octal para Decimal\n\t8. Decimal para Octal\n\n\t\tEscolha uma opcao: ");
	scanf("%d", &opcao);
	switch(opcao){
		case 1:{
			printf("\n\tDigite o numero binario: ");
			char w[256];
			int i,n, guardan, m, num=0, alfa=0, v[256];
			getchar();
			gets(w);
			n = medir(w) - 1;
			m = medir(w);
			guardan= n;
			charparaint(m,v,w);
			for(i=0, n=0; n<=guardan; i++, n++, m--)
			{
				alfa = potencia(m-1);
				num+= v[i] *alfa;
			}
			printf("\n\tNumero convertido em decimal: %d", num);
			break;}
		case 2:{
			printf("\n\tDigite o numero binario: ");
			char w[256];
			int i,n, guardan, m, num=0, alfa=0, v[256];
			getchar();
			gets(w);
			n = medir(w) - 1;
			m = medir(w);
			guardan= n;
			charparaint(m,v,w);
			for(i=0, n=0; n<=guardan; i++, n++, m--)
			{
				alfa = potencia(m-1);
				num+= v[i] *alfa;
			}
			printf("\n\tNumero convertido em hexadecimal: %x", num);
			break;}
		case 3:{
			printf("\n\tDigite o numero hexadecimal: ");
			scanf("%x", &b);
			printf("\n\tNumero convertido em decimal: %d", b);
			break;}
		case 4:{
			int i,num=0, nbases=0, base=0;
			printf("\n\tDigite o numero hexadecimal: ");
			scanf("%x", &num); getchar();
			nbases = conta_base2(num);
			base = potencia(nbases-1);
			printf("\n\tNumero convertido em binario: ");
			for(i=0; i<nbases; i++)
			{
				if (num >= base)
				{
					printf("1");
					num-=base;
				}
				else printf("0");
				base /= 2;
			}
			break;}
		case 5:{
			int i,num=0, nbases=0, base=0;
			printf("\n\tDigite o numero decimal: ");
			scanf("%d", &num); getchar();
			nbases = conta_base2(num);
			base = potencia(nbases-1);
			printf("\n\tNumero convertido em binario: ");
			for(i=0; i<nbases; i++)
			{
				if (num >= base)
				{
					printf("1");
					num-=base;
				}
				else printf("0");
				base /= 2;
			}
			break;}
		case 6:{
			printf("\n\tDigite o numero decimal: ");
			scanf("%d", &b);
			printf("\n\tNumero convertido em hexadecimal: %x", b);
			break;}
		case 7:{
			printf("\n\tDigite o numero Octal: ");
			scanf("%o", &b);
			printf("\n\tNumero convertido em Decimal: %d", b);
			break;}
		case 8:{
			printf("\n\tDigite o numero Decimal: ");
			scanf("%d", &b);
			printf("\n\tNumero convertido em Octal: %o", b);
			break;}
	}
	return 0;
}
