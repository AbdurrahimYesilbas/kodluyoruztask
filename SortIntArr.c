#include <stdio.h>

void bubbleSort(int arr[], int size) {
    int i, j;
    int temp;

    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // iki elemanin yerini degistirir
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int size, i;

    printf("Dizinin boyutunu girin: ");
    scanf("%d", &size);

    int arr[size];

    printf("Dizinin elemanlarini girin:\n");
    for (i = 0; i < size; i++) {
        printf("Eleman %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, size);

    printf("Dizinin siralanmis hali:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}