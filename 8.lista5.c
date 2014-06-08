#include <stdio.h>



void ler()

{
    int p;
    printf("Digite quantos numeros serao colocados:");
    scanf("%d",&p);
    calcule(p);
}



void calcule(int n)

{
    int vet[n],i = 0,maior=0,j = 0,cont = 0;

    while (i < n)
    {
        printf("Digite um numero:");
        scanf("%d",&vet[i]);
        if (vet[i] > maior)
        {
            maior = vet[i];
        }
        i++;
    }

    while (j < n)
    {
        if (vet[j] == maior)
        {
            cont = cont + 1;

        }

        j++;
    }

    printf("O maior numero: %d",maior);

  return (maior);
}



int main()
{
  ler();

}


