#include <stdio.h>

int num,vet[],i,*p,j;


void iniciar()
{
  printf("Digite quantos numeros tera o vetor:");
  scanf("%d",&num);

}


void ler()
{
  for (i=0;i < num;i++)
  {
    printf("Digite um numero:");
    scanf("%d",&vet[i]);
    p = &vet[i];
    vet[i] = *p + 1;
  }

}


void imprime()
{
  for (j=0;j < num;j++)
  {
    printf("\n%d",vet[j]);

  }
}


int main()

{
   iniciar();
   ler();
   imprime();
   return 0;

}
