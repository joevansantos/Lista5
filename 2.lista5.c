#include <stdio.h>

int a,b;

void recebe ()
{
printf("Digite um numero:");
scanf("%d",&a);
printf("Digite outro numero:");
scanf("%d",&b);
}

void troca ()
{
  int * p;
  if (b > a)
  {
    *p = a;
     a = b;
     b = *p;
  }

}

void imprime()
{
  printf("\n%d",a);
  printf("\n%d",b);

}


int main(void)

{
recebe();
troca();
imprime();

}



