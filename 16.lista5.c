#include <stdio.h>

int num,num2,*p,*q;


void ler()
{
  printf("Digite um numero:");
  scanf("%d",&num);
  printf("Digite outro numero:");
  scanf("%d",&num2);

}



void calcule()
{
  p = &num;
  q = &num2;
}



void imprime()
{

  if (*p > *q)
  {
      printf("O maior numero foi num: endereco %d ",*p);

  }

  else
  {
      printf("O maior numero foi num2: %d ",*q);

  }

}


int main()

{

   ler();
   calcule();
   imprime();
   return 0;

}
