#include <stdio.h>

int main() {
    int n;
    printf("Taille du tableau : ");
    scanf("%d", &n);

    int tab[n];
    printf("Elements du tableau :\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &tab[i]);

    // Tri à bulles
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (tab[j] > tab[j + 1]) {
                int tmp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = tmp;
            }
        }
    }

    if (n % 2 == 1)
        printf("Mediane = %d\n", tab[n / 2]);
    else
        printf("Mediane = %.1f\n", (tab[n/2 - 1] + tab[n/2]) / 2.0);

    return 0;
}
