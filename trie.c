#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    printf("Taille du tableau : ");
    scanf("%d", &n);

    int tab[n];
    printf("Elements du tableau :\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &tab[i]);

    bool trie = true;
    for (int i = 0; i < n - 1; i++) {
        if (tab[i] > tab[i + 1]) {
            trie = false;
            break;
        }
    }

    if (trie)
        printf("Le tableau est trie.\n");
    else
        printf("Le tableau n'est pas trie.\n");

    return 0;
}
