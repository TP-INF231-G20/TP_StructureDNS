#include <stdio.h>

struct Vector3 {
    int x, y, z;
};

int main() {
    struct Vector3 a, b, c;
    printf("Vecteur a (x y z) : ");
    scanf("%d %d %d", &a.x, &a.y, &a.z);
    printf("Vecteur b (x y z) : ");
    scanf("%d %d %d", &b.x, &b.y, &b.z);

    c.x = a.y * b.z - a.z * b.y;
    c.y = a.z * b.x - a.x * b.z;
    c.z = a.x * b.y - a.y * b.x;

    printf("a x b = (%d, %d, %d)\n", c.x, c.y, c.z);

    return 0;
}
