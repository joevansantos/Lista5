#include <stdio.h>

float n1,n2,msimples,mponde;

void le_notas ()

{
   printf("Digite a primeia nota:");
   scanf("%f",&n1);
   printf("Digite a segunda nota:");
   scanf("%f",&n2);

}

void calc_media()
{
  msimples = (n1 + n2)/2;
  mponde = (n1 + n2 * 2)/3;

}

void exibe_dados()
{
  printf("\nEssa foi a primeira nota:%.2f",n1);
  printf("\nEssa foi a segunda nota:%.2f",n2);
  printf("\nEssa foi a media simples:%.2f",msimples);
  printf("\nEssa foi a media ponderada:%.2f",mponde);
}


int main()
{
  le_notas();
  calc_media();
  exibe_dados();
  return 0;

}
