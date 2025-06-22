// sorting arrays way 2;

#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int arrayA[] = {1, 3, 5};
    int arrayB[] = {2, 4, 6, 7};
    int arrayC[7]; 
    int lengthA = sizeof(arrayA) / sizeof(arrayA[0]);
    int lengthB = sizeof(arrayB) / sizeof(arrayB[0]);
    int lengthC = lengthA + lengthB;


    for (int i = 0; i < lengthA; i++) {
        arrayC[i] = arrayA[i];
    }
    for (int i = 0; i < lengthB; i++) {
        arrayC[lengthA + i] = arrayB[i];
    }


    qsort(arrayC, lengthC, sizeof(int), compare);

    for (int i = 0; i < lengthA; i++) {
        arrayA[i] = 0;
    }
    for (int i = 0; i < lengthB; i++) {
        arrayB[i] = 0;
    }

    for (int i = 0; i < lengthA; i++) {
        arrayA[i] = arrayC[i];
    }
    for (int i = lengthA; i < lengthC; i++) {
        arrayB[i - lengthA] = arrayC[i];
    }

    printf("Array A:\n");
    for (int i = 0; i < lengthA; i++) {
        printf("%d ", arrayA[i]);
    }
    printf("\nArray B:\n");
    for (int i = 0; i < lengthB; i++) {
        printf("%d ", arrayB[i]);
    }
    printf("\n");

    return 0;
}