#include <stdio.h>

int ler ()
{
    float num3;
    int *inteiro2;
    printf ("Digite um numero:");
    scanf("%f",&num3);
    calcule (num3);
}


void calcule(float num2)

{
    float l;
    float *fracionario2;
    int j;
    int * inteiro2;

    j = (int)num2;
    inteiro2 = &j;
    l = num2 - j;
    fracionario2 = &l;
    frac (num2,*inteiro2,*fracionario2);
}


void frac (float num,int *inteiro,float *fracionario)

{
    printf("\nO numero real e :%.2f ", num2);
    printf("\nO numero inteiro do real e :%.f",* inteiro2);
    printf("\nO numero fracionario do real e :%f",*fracionario2);
    return 2;

}


int main()

{
    ler();

}

