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

  if (p > q)
  {
      printf("O maior endereco foi p: endereco %d ",p);
      printf("O menor endereco foi q:%d ",q);
  }

  else
  {
      printf("O maior endereco foi p: endereco %d ",q);
      printf("O menor endereco foi q:%d ",p);
  }

}


int main()

{

   ler();
   calcule();
   imprime();
   return 0;

}
