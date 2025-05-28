#include <stdio.h>

int main(void) {
    int quantidade, comp, notas, media, i;

    printf("Digite o número de competidores: \n");
    scanf("%d", &comp);

    if (comp < 1) {
        printf("Competidores inválidos\n");
    } else {
        printf("Escreva o número mínimo de aprovados: \n");
        scanf("%d", &quantidade);

        if (quantidade < 1) {
            printf("Aprovados inválidos\n");
        } else {
            int A[comp];
            notas = 0;

            for (i = 0; i < comp; i++) {
                printf("Digite a nota do competidor %d: ", i + 1);
                scanf("%d", &A[i]);
                notas += A[i];
            }

            media = notas / comp;

            int count = 0;
            for (i = 0; i < comp; i++) {
                if (A[i] >= media) {
                    count++;
                }
            }

            printf("Total de aprovados: %d\n", count);
        }
    }

    return 0;
}
