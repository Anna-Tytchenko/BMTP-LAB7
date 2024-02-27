#include <stdio.h>

#define SIZE 15

// Функція для знаходження індексу мінімального елемента в масиві
int findMinIndex(int arr[], int size) {
    int minIndex = 0;
    for (int i = 1; i < size; ++i) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    return minIndex;
}

// Функція для знаходження індексу максимального елемента в масиві
int findMaxIndex(int arr[], int size) {
    int maxIndex = 0;
    for (int i = 1; i < size; ++i) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}

// Функція для зміни місцями елементів за їхніми індексами
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int arr[SIZE];

    // Ввід масиву від користувача
    printf("Введіть %d натуральних чисел: ", SIZE);
    for (int i = 0; i < SIZE; ++i) {
        scanf("%d", &arr[i]);
    }

    // Знаходження індексів мінімального та максимального елементів
    int minIndex = findMinIndex(arr, SIZE);
    int maxIndex = findMaxIndex(arr, SIZE);

    // Зміна місцями мінімального та максимального елементів
    swap(&arr[minIndex], &arr[maxIndex]);

    // Вивід модифікованого масиву
    printf("Модифікований масив: ");
    for (int i = 0; i < SIZE; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
