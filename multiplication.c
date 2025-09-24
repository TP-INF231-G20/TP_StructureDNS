#include <stdio.h>

int main() {
    int a, b, resultat = 0;
    printf("Entrer a et b (positifs) : ");
    scanf("%d %d", &a, &b);

    for (int i = 0; i < b; i++)
        resultat += a;

    printf("%d x %d = %d\n", a, b, resultat);

    return 0;
}
