#include <stdio.h>

int num,tam,vet[10],i,j;
int *p;

void ler ()
{
  printf("Digite um numero:");
  scanf("%d",&num);
  printf("Digite o tamanho do vetor:");
  scanf("%d",&tam);
}


void calcule()
{
  for (i = 0;i < tam;i++)
  {
    p = &vet[0];
    *(p + i) = num;
    printf("\n%d",vet[0]);

  }

}


int main()
{
  ler();
  calcule();
  return 0;

}
