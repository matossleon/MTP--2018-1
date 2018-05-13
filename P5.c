//Aluno: Leonardo Matos Silva
//Matrícula: 11721EBI021

#include <stdio.h>
int main()
{
	int k , i,num[64], *pnum;
	char msg[256], *pmsg;
	for(i=0;i<256;i++) msg[i] = '\0';
	printf("\n\tVoce deseja...\n\n\t\t1. Codificar\n\t\t2. Decodificar\n\n\n\tOpcao: "); scanf("%d",&k); getchar();
	switch(k){
		case 1:{
			printf("\tDigite uma mensagem de ate 255 caracteres: \n\n\t"); gets(msg);
			char *pmsg= msg;
			printf("\n\tMensagem codificada:\n\t\t");
			for(i=0;msg[i];i++){
				pnum = (int*)pmsg;
				if(pnum[i]!=0) printf("%d",pnum[i]);
				if(pnum[i+1]!=0) printf(", ");}
			break;
		}
		case 2:{
			printf("\tDigite uma sequencia numerica com ate 64 numeros, sendo o ultimo(64) entre 1 e "
			"4095!!!\n   \t\tObs:Digite 0 p/ finalizar a entrada\n\n\n]");
			for(i=0;i<64;i++) {
				printf("\tn%d:\t ", i+1); scanf("%d", &num[i]);
				pmsg = (char*)num;
				if(num[i]==0) break;} printf("\n\n\tFrase decodificada: %s", pmsg);}}
	return 0;
}
