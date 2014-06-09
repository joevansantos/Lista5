#include <stdio.h>

int i,vet[5],j,*p;

void ler()
{
    for(i = 0;i < 5;i++)
    {
        printf("Digite um numero:");
        scanf("%d",&vet[i]);
        p = &vet[i];

        if (vet[i] % 2 == 0)
        {
          printf("%d e par",vet[i]);
          printf("\nSua posicao e:%d",p);
        }

        else
        {
          printf("%d nao e par",vet[i]);
          printf("\nSua posicao e:%d",p);
        }
        printf("\n");
    }
}


int main()
{
    ler();
    return 0;
}

