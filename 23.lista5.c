#include <stdio.h>

int vet[] = { 10, 20, 30, 40, 50 },i;
int *p;

void ler()
{
  for (i = 0,p = vet;i < 5;i++,p++)
  {

    printf("%d\n",*p);

    }
}

int main()
{
  ler();
  return 0;
}
