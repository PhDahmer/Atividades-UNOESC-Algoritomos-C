#include <stdio.h>


float tx,vd,vb,depre;
int anos;


int main(void)
{
    printf("Informe o valor do bem a ser depreciado: \n");
    scanf("%f", &vb);

    printf("Informe o período da depreciação <em anos>: \n");
    scanf("%d", &anos);

    int i;
    printf("Anos\tValor do bem\tDepreciação\tValor depreciado\n");
    printf("=====================================================\n");

    tx=0.15;
    for (i=1; i <= anos; i++)
    {
       depre=vb*tx;
       vd=vb-depre;
       
      printf("%d\t%.2f\t %.2f\t %.2f\n", i, vb, depre, vd);

      vb=vd;

        
    }
    
    
    return 0;
}