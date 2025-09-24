#include <stdio.h>

int main() {
    int n;
    printf("Taille de la matrice carree : ");
    scanf("%d", &n);

    int v[n], M[n][n], res[n];

    printf("Elements du vecteur v :\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
        res[i] = 0; // initialisation du resultat
    }

    printf("Elements de la matrice M :\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &M[i][j]);

    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n; i++) {
            res[j] += v[i] * M[i][j];
        }
    }

    printf("Resultat v * M = [");
    for (int j = 0; j < n; j++)
        printf("%d ", res[j]);
    printf("]\n");

    return 0;
}
