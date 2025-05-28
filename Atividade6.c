#include <stdio.h>

int main()
{
    int sitios;

    printf("Digite a quantidade de sitios estrelas: ");
    scanf("%d", &sitios);

    int carneiro[sitios];
    int ataque[sitios];

    for (int i = 0; i < sitios; i++) {
        printf("Insira a quantidade de ovelhas no Estrela [%d]: ", i + 1);
        scanf("%d", &carneiro[i]);
        ataque[i] = 0;
    }

    int passos = 0;

    while (1) {
        if (passos < 0 || passos >= sitios) {
            break;
        }

        ataque[passos] = 1;
        if (carneiro[passos] > 0) {
            carneiro[passos]--;
        }

        if (carneiro[passos] % 2 == 0) {
            passos--;
        } else {
            passos++;
        }
    }

    int totalCarneiro = 0;
    int totalEstrela = 0;

    for (int i = 0; i < sitios; i++) {
        totalCarneiro += carneiro[i];
        totalEstrela += ataque[i];
    }

    printf("Total de sitios atacados: %d\n", totalEstrela);
    printf("Total de ovelhas restantes: %d\n", totalCarneiro);

    return 0;
}
