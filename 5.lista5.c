#include <stdio.h>

int a,b,d;
int *p;


void ler ()
{
    printf ("Digite o primeiro numero:");
    scanf("%d",&a);
    printf ("Digite o segundo numero:");
    scanf("%d",&b);

}

void soma()
{
    d = a + b;
    p = &d;
    a = *p;

}


 int main()
 {

  ler();
  soma();
  printf ("\n %d",a);
  printf ("\n %d",b);
 }




