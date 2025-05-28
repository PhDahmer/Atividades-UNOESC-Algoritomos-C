#include <stdio.h>

int num_conta, verificador_num, numeros[3], tempconta, invertido;

int main()
{
    do {
        printf("Digite o número da conta: ");
        scanf("%d", &num_conta);
    } while (num_conta < 1000 || num_conta > 9999);

    verificador_num = num_conta % 10;
    tempconta = num_conta / 10;

    for (int i = 1; i <= 3; i++) {
        numeros[i - 1] = tempconta % 10;
        tempconta = tempconta / 10;
    }

    invertido = numeros[0] * 100 + numeros[1] * 10 + numeros[2];

    int conta = num_conta / 10;
    int verificador = conta + invertido;

    for (int i = 1; i <= 3; i++) {
        numeros[i - 1] = verificador % 10;
        verificador = verificador / 10;
    }

    int quaseverificador = 0;
    quaseverificador = numeros[2] * 1 + numeros[1] * 2 + numeros[0] * 3;

    quaseverificador = quaseverificador % 10;

    if (quaseverificador == verificador_num) {
    printf("\nEstá conta existe!\n");
    printf("O último dígito da conta é: %d\n", verificador_num);
    printf("E o resultado das operações para verificar o número é: %d\n", quaseverificador);
} else {
    printf("\nEstá conta não existe!\n");
    printf("O último dígito da conta é: %d\n", verificador_num);
    printf("E o resultado das operações para verificar o número é: %d\n", quaseverificador);
}

    return 0;
}
