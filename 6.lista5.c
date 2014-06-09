#include <stdio.h>

float delta,raiz1,raiz2;

int ler ()
{
    float a2,b2,c2;
    printf ("Digite o primeiro numero:");
    scanf("%f",&a2);
    printf ("Digite o segundo numero:");
    scanf("%f",&b2);
    printf ("Digite o terceiro numero:");
    scanf("%f",&c2);
    raizes (a2,b2,c2);
}



int raizes(float a,float b,float c,float *x1,float *x2)

{
  delta = (b * b) - 4 * a * c;
  raiz1 = -(b) + squrt(delta) / 2 * a;
  raiz2 = -(b) - squrt(delta) / 2 * a;


}


void imprime()

{
   printf("\n%f",raiz1);
   printf("\n%f",raiz2);


}
int main()

{
    ler();
    imprime();
    return 0;

}
