
#include <stdio.h>

float vet[];
int i,num,j,*p;


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
    scanf("%f",&vet[i]);
    p = &vet[i];
    printf("posicao:%d",p);
    printf("\n");
  }

}


int main()

{
   iniciar();
   ler();
   return 0;

}
