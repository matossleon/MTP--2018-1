//Aluno: Leonardo Matos
//Matrícula: 11721EBI021
#include <stdio.h>
void mostrar(int v[])
{
	int i;
    for(i=0;i<32;i++)
	printf("%d",v[i]);
}
void binario(int num, int v[]){
	int i,r;
	for(i = 31; i >= 0; i--) {
	    r = num >> i;
	    if(r & 1) {
		v[31-i]=1;
		printf("1");}
	    else {
	    v[31-i]=0;
		printf("0");}}}

int decimal(int v[])
{
    int i,j,alfa,n,num=0,m=32;
    for(i=0, n=0; n<=31; i++, n++, m--){for(j=1,alfa=1; j<=m-1; alfa*=2, j++);num+= v[i] *alfa;}
    return num;
}



int main()
{
	int b=1;
	for(b=1;b;b++){
	do{
	int i,k,x,y,v[32],w[32],z[32],u,c;
		printf("OPERACAO %d: \n",b);
		b++;
	printf("\n\nDigite uma opcao:\n\n");
	printf("\t1. NOT\n\t2. AND\n\t3. OR\n\t4. XOR\n\t5. Right Shift\n\t6. Left Shift\n\n\t0. Sair do programa.\n\n~~~~~~~~|)> ");
	scanf("%d", &k);getchar();
	printf("\n\n");
	if(k==1){
			printf("\tDigite o argumento: ");
			scanf("%d", &x);getchar();}
	else if(k>1 && k<=4){
		printf("\tDigite dois argumentos:\n");
			scanf("%d%d", &x,&y);getchar();}
	else if(k>4 && k<=6){
	printf("\tDigite o argumento: "); scanf("%d",&x);getchar();
	printf("\tDigite quantas posicoes deseja deslocar: ");	scanf("%d", &y);getchar();}
	else if (k==7)printf("Saindo do programa...");
	switch(k){
		case 0:{
			return 0;
			break;
		}
		case 1:{
			printf("\tNOT %d (",x); binario(x,v);
			printf(")\n\tResultado: ");
			for(i=0;i<32;i++)
			v[i] = !v[i];
			printf("%d (", decimal(v));
			mostrar(v);printf(")");
			break;
		}
		case 2:{
			printf("\t%d (",x); binario(x,v); printf(") AND %d (",y); binario(y,w); printf(")\n\tResultado: ");
			for(i=0;i<32;i++)
			{
				if(v[i]==1 && w[i]==1)
				z[i] = 1;
				else z[i] = 0;
			}
			printf("%d (", decimal(z));
			mostrar(z);			printf(")");
			

			break;
		}
		case 3:{
			printf("\t%d (",x); binario(x,v); printf(") OR %d (",y); binario(y,w); printf(")\n\tResultado: ");
			for(i=0;i<32;i++)
			{
				if(v[i]==1 || w[i]==1)
				z[i] = 1;
				else z[i] = 0;
			}
			printf("%d (", decimal(z));
			mostrar(z);			printf(")");
			
			break;
		}
		case 4:{
			printf("\t%d (",x); binario(x,v); printf(") xOR %d (",y); binario(y,w); printf(")\n\tResultado: ");
			for(i=0;i<32;i++)
			{
				if(v[i]==1 ^ w[i]==1)
				z[i] = 1;
				else z[i] = 0;
			}
			printf("%d (", decimal(z));
			mostrar(z);			printf(")");

			break;
		}
		case 5:{
			printf("\t%d (",x); binario(x,v); printf(") >> %d (",y); binario(y,w); printf(")\n\tResultado: ");
			u = x >> y;
			printf("%d (",u);
			binario(u,z); printf(")");
			break;
		}
		case 6:{
			printf("\t%d (",x); binario(x,v); printf(") << %d (",y); binario(y,w); printf(")\n\tResultado: ");
			u = x << y;
			printf("%d (",u);
			binario(u,z); printf(")");
			break;
		}
	}
	printf("\n\n\n\t\tAPERTE ALGUMA TECLA PARA REALIZAR A PROXIMA OPERACAO\n\n\n");
	scanf("%c",&c);
	printf("\n\n\n\n\n\n\n");
}while(1);}
	return 0;
}
