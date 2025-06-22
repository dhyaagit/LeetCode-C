#include <stdio.h>
#include <stdlib.h> 

int climbStairs(int n) {
    if (n == 1) return 1;
    int *array = (int*)malloc((n + 1) * sizeof(int));
    if (array == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    array[1] = 1;
    array[2] = 2;
    for (int i = 3; i <= n; i++)
        array[i] = array[i - 1] + array[i - 2];
    int result = array[n];
    free(array);
    return result;
}

int main() {
    printf("%d\n", climbStairs(3));
    return 0;
}