#include <stdio.h>

int num,num2,i,j,l,k,vet[100],vet2[100],vet3[100];
int * p,* p2;
void leia()
{
  printf("Digite quantos numeros conterao o vetor:");
  scanf("%d",&num);

  for  (i = 0;i < num;i++)
  {
      *p = &vet[i];
      printf("Digite um numero:");
      scanf("%d",&vet[i]);

  }

}

void leia2()
{
  printf("Digite quantos numeros conterao o vetor:");
  scanf("%d",&num2);
  *p2 = &vet2[j];
  for  (j = 0;j < num2;j++)
  {
      printf("Digite um numero:");
      scanf("%d",&vet2[j]);
  }
}

void soma()
{
  for (l = 0;l < num;l++)
  {
      vet3[l]= *p + *p2;
      *p++;
      *p2++;

  }
}


void imprime()
{
    for (k = 0;k < num;k++)
  {
      printf("\n%d",vet3[k]);
  }
}

int main()

{
  leia();
  leia2();
  soma();
  imprime();
  return 0;
}
