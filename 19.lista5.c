#include <stdio.h>

int i,vet[5],j,*p;

void ler()
{
 for(i = 0;i < 5;i++)
{
    printf("Digite um numero:");
    scanf("%d",&vet[i]);
    p = &vet[i];
    printf("%d",*p * 2);
    p++;
    printf("\n");
}
}


int main()
{
    ler();
    return 0;
}
