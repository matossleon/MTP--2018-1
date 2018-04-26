//Nome: LEONARDO MATOS SILVA
//Matrícula: 11721EBI021

#include <stdio.h>

int main()
{
    int e = 0, i = 0;
    char bin[256];
    printf("Digite um numero em binario: ");
    scanf("%s", &bin);     	
while(bin[i] != '\0')
    {
        if(bin[i] == '0')
        {
            if(e == 0);
            else if(e == 1) e = 2;
            else if(e == 2) e = 1;
            i++;
        }
        else if(bin[i] == '1')
        {
            if(e == 0) e = 1;
            else if(e == 1) e = 0;
            else if(e == 2);
            i++;
        }
        else
        {
            printf("\nNumero digitado nao e binario");
            return 0;
        }
    }
    
    if(e == 0) printf("\n O numero binario %s e multiplo de 3", bin);
    else printf("\n O numero binario %s nao e multiplo de 3", bin);
    return 0;
}
