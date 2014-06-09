#include <stdio.h>

void ler ()
{
  printf("Digite um palavra:");
  gets(palavra);
  printf("Digite um palavra:");
  gets(palavra2);


}

void calcule()
{
  j = strlen(palavra);
  i = strlen(palavra2);
  p = &palavra[0];
  q = &palavra2[0];


}

void imprime()
{
  while (i < j)
  {
     if (p == q)
     {
         p++;
         q++;
         cont = cont + 1;
     }
  }


