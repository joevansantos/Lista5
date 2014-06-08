#include <stdio.h>
#include <stdlib.h>

int i;
int * i2;
float r;
float * r2;
char ch;
char * c2;

void ler ()
{
    printf("Digite um numero inteiro: ");
    scanf("%d",&i);
    printf("Digite um valor real:");
    scanf("%f",&r);
    printf("Digite um caracter:");
    scanf("%c ",&ch);

}

void atribuir()

{
   i2 =  &i;
   r2 =  &r;
   c2 =  &ch;
}

void modificar()

{
   * i2 =  100;
   * r2 =  3.15;
   * c2 = 'b';

}

void imprimir()
{    printf("\n%d",i);
    printf("\n%f",r);
    printf("\n%c",ch);

}

int main()

{

    ler();
    atribuir();
    modificar();
    imprimir();
    return 0;
}
