#include <stdio.h>

int n,k,i,j= 0,b,maior = 0,vet[];
void leia ()

{
    printf("Digite a quantidade de valores a serem digitados:");
    scanf("%d",&n);
    printf("Digite quantos numeros serao impressos por linha: ");
    scanf("%d",&k);

}


void calcule()
{


for (i = 0;i < n;i++)
{
    printf("Digite um numero:");
    scanf("%d",&vet[i]);
    if (vet[i] > maior)
    {
        maior = vet[i];
    }
}
}



void imprime()

{
  while (j < n)
  {

         for (b= 0;b < k;b++)
         {
             printf("%d ",vet[j]);

             j++;

         }

         printf("\n");
  }

}



int main()

{

    leia();
    calcule();
    imprime();
    return 0;

}
