#include <stdio.h>
int a,b,c;

void recebe ()
{
printf("Digite um numero:");
scanf("%d",&a);
printf("Digite outro numero:");
scanf("%d",&b);
printf("Digite mais um numero:");
scanf("%d",&c);

}

void troca ()
{
  int * p;
  if (b > a && b < c)
  {
    *p = c;
    c = a;
    a = *p;
  }

  if (c < b && c > a )
  {
      *p = a;
       a = b;
       b = c;
       c = *p;
  }



}

void imprime()
{
  printf("\n%d",a);
  printf("\n%d",b);
  printf("\n%d",c);


}


int main(void)

{
recebe();
troca();
imprime();

}



