# include <stdio.h>

void main() {
    int LA[] = {1, 3, 5, 7, 8};
    int item = 10, k = 3, n = 5;
    int i = 0, j = n;
    printf("The original array elements are :\n");
    for (i = 0; i < n; i++) {
        printf("LA[%d] = %d \n", i, LA[i]);
    }
    LA[k-1] = item;
    printf("The array elements after insertion :\n");
    for (i = 0; i < n; i++) {
        printf("LA[%d] = %d \n", i, LA[i]);
    }

    for (i = k-1; i < n; i++) {
        LA[i] = LA[i+1];
    }
    printf("The array elements after deletion :\n");
    for (i = 0; i < n; i++) {
        printf("LA[%d] = %d \n", i, LA[i]);
    }
}