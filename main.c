#include <stdio.h>
#include <stdlib.h>

int findMax(int *arr, int n);

int main(void) {
    int n;

    printf("n(0 < n < 100)= ");
    scanf("%d", &n);

    if (n < 0 || n ==0 || n >= 100) {
        printf("so luong phan tu ko hop le");
        return 1;
    }

    int *arr = malloc(n * sizeof(int));

    for (int i =0; i < n; i++) {
        printf("arr[%d]= ", i);
        scanf("%d", &arr[i]);
    }

    printf("max= %d", findMax(arr, n));

    free(arr);
    return 0;
}

int findMax(int *arr, int n) {
    int max = arr[0];

    for (int i =1; i < n; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    return max;
}