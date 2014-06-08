#include <stdio.h>

int a,b,*p;

void ler()
{
    printf("Digite a variavel a:");
    scanf("%d",&a);
    printf("Digite a variavel b:");
    scanf("%d",&b);
}

void calcule()
{
  p = &a;
  a = a + * p;
  p = &b;
  b = *p + b;
}

void imprime()
{
  printf("\n%d",a);
  printf("\n%d",b);
}

int main()

{
    ler();
    calcule();
    imprime();
    return 0;

}
