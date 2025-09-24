#include <stdio.h>

int main() {
    int n, valeur, trouve = -1;
    printf("Taille du tableau : ");
    scanf("%d", &n);

    int tab[n];
    printf("Elements du tableau :\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &tab[i]);

    printf("Valeur a chercher : ");
    scanf("%d", &valeur);

    for (int i = 0; i < n; i++) {
        if (tab[i] == valeur) {
            trouve = i;
            break;
        }
    }

    if (trouve != -1)
        printf("Valeur trouvee a l'indice %d\n", trouve);
    else
        printf("Valeur non trouvee.\n");

    return 0;
}
