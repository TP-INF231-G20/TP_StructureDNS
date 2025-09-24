#include <stdio.h>

int main() {
    int n;
    printf("Taille du tableau : ");
    scanf("%d", &n);

    int tab[n];
    printf("Elements du tableau :\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &tab[i]);

    for (int i = 0, j = n - 1; i < j; i++, j--) {
        int tmp = tab[i];
        tab[i] = tab[j];
        tab[j] = tmp;
    }

    printf("Tableau inverse : ");
    for (int i = 0; i < n; i++) printf("%d ", tab[i]);
    printf("\n");

    return 0;
}
