#include <stdio.h>

int main(void)
{
    char resposta;
    do {
    int quant,qntt = 0;
    float media, valor, soma = 0;
    
    do
    {
        printf("Informe a quantidade de um produto: ");
        scanf(" %d", &quant); 

        if (quant > 0) {
    do {
        printf("Informe o valor: R$");
        scanf("%f", &valor);

        if (valor <= 0) {
            printf("Valor inválido! Digite um valor positivo.\n");
        }
    } while (valor <= 0);

    soma = soma + (valor * quant);
    qntt = qntt + quant;
}
    } while(quant > 0);
        
    if(qntt > 0){
        media = soma / qntt;
        int centavos = (int)(soma * 100) % 100;
        printf("\n""==================================================================\n");
        printf("O valor da compra eh R$%.2f\n", soma);
        printf("A media da compra eh R$%.2f\n", media);
        printf("\n""Valor total da compra eh %.0f reais e %d centavos.\n", soma, centavos);
        printf("==================================================================\n");
        
        int reais = (int)soma;
        
        int reais100 = reais/100;
        reais100 %= 100;
        
        int reais50 = reais/50;
        reais50 %= 50;
        
        int reais20 = reais/20;
        reais20 %= 20;
        
        int reais10 = reais/10;
        reais %= 10;
        
        int reais5 = reais/5;
        reais %= 5;
        
        int reais2 = reais/2;
        reais %= 2;
        
        int moedas = reais/1;
        reais %= 1;
        printf("\n==================================================================\n");
        printf("%.0f reais equivale a: \n",soma);
        if (reais100) printf("\n%d nota(s) de 100\n",reais100);
        if (reais50) printf("%d notas(s) de 50\n",reais50);
        if (reais20) printf("%d notas(s) de 20\n",reais20);
        if (reais10) printf("%d notas(s) de 10\n",reais10);
        if (reais5) printf("%d notas(s) de 5\n",reais5);
        if (reais2) printf("%d notas(s) de 2\n",reais2);
        if (moedas) printf("%d moedas de 1\n",moedas);
        printf("==================================================================\n");
        
    } else {
        printf("Valores inválidos\n");  
    }
    
    printf("\nDeseja repetir o programa? (S ou N): ");
    scanf(" %c",&resposta);
    
    
}while (resposta == 'S' || resposta == 's');

    printf("\nPrograma encerrado."); 
    return 0;
}
