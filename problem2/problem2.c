#include <stdio.h>
#include <math.h>

int main() {
    int a[] = {1, 0, 1, 0, 1, 0};
    int value = 0;
    int cpt = 0;

    for (int i = sizeof(a) / sizeof(a[0]) - 1; i >= 0; i--) {
        if (a[i] == 1) {
            value += pow(2, cpt);
        }
        cpt++;
    }

    printf("%d\n", value);

    return 0;
}