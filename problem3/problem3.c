#include <stdio.h>

int main() {
    int Array1[] = {1, 2, 3, 5, 6, 7};
    int Array2[] = {3, 4, 6, 7};
    int A3[100]; // Assuming a maximum size
    int count = 0;

    for (int i = 0; i < sizeof(Array1) / sizeof(Array1[0]); i++) {
        for (int j = 0; j < sizeof(Array2) / sizeof(Array2[0]); j++) {
            if (Array1[i] == Array2[j]) {
                A3[count++] = Array1[i];
            }
        }
    }

    printf("[");
    for (int i = 0; i < count; i++) {
        printf("%d", A3[i]);
        if (i < count - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}