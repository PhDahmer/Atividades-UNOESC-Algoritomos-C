#include <stdio.h>

int main(void) {
    int A[3];
    for (int i = 0; i < 3; i++) {
        scanf("%d", &A[i]);
    }

    int minimo = -1;

    for (int pos = 0; pos < 3; pos++) {
        int tempo_total = 0;
        for (int i = 0; i < 3; i++) {
            int d;
            if (i > pos)
                d = i - pos;
            else
                d = pos - i;

            tempo_total += d * 2 * A[i];
        }
        if (minimo == -1 || tempo_total < minimo) {
            minimo = tempo_total;
        }
    }

    printf("%d\n", minimo);

    return 0;
}