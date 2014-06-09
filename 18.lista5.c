#include <stdio.h>

int i,j;
float vet[10],*p;


void ler()
{
  for (i=0;i < 10;i++)
  {
    printf("Digite um numero:");
    scanf("%f",&vet[i]);

  }

}


void imprime()
{
  for (j=0;j < 10;j++)
  {
    p = &vet[j];
    printf("\n%d",p);


  }
}


int main()

{

   ler();
   imprime();
   return 0;

}
