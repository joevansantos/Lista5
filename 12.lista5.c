#include <stdio.h>

int i,vet[],maior = 0,menor = 100,min,max;
int *p,*q;

void ler()

{
  p = &min;
  q = &max;

}

void vetor()
{
  for (i = 0;i < 5;i++)
  {
      printf("Digite um numero:");
      scanf("%d",&vet[i]);
        if (vet[i] > maior)
        {
            maior = vet[i];
        }

        if (vet[i] < menor)
        {
            menor = vet[i];
        }
  }

}


void calcule()
{
    *q = maior;
    *p = menor;
}

void imprime()
{
    printf("\nO maior numero foi:%d",max);
    printf("\nO menor foi:%d",min);
}

int main()
{
   ler();
   vetor();
   calcule();
   imprime();
   return 0;
}
