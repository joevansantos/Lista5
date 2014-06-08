#include <stdio.h>

int a,b;

void imprime ()

{
printf("Digite um numero:");
scanf("%d",&a);
printf("Digite outro numero:");
scanf("%d",&b);


}

void troca ()
{
  int * p;

  *p = &a;
  a = b;
  b = p;

  printf("\n%d",a);
  printf("\n%d",b);

}


int main(void)

{

imprime();
troca();

}


