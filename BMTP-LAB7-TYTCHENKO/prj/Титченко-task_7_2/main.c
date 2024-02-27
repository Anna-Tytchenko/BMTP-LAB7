#include <stdio.h>

#define SIZE 15

// ������� ��� ����������� ������� ���������� �������� � �����
int findMinIndex(int arr[], int size) {
    int minIndex = 0;
    for (int i = 1; i < size; ++i) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    return minIndex;
}

// ������� ��� ����������� ������� ������������� �������� � �����
int findMaxIndex(int arr[], int size) {
    int maxIndex = 0;
    for (int i = 1; i < size; ++i) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}

// ������� ��� ���� ������ �������� �� ����� ���������
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int arr[SIZE];

    // ��� ������ �� �����������
    printf("������ %d ����������� �����: ", SIZE);
    for (int i = 0; i < SIZE; ++i) {
        scanf("%d", &arr[i]);
    }

    // ����������� ������� ���������� �� ������������� ��������
    int minIndex = findMinIndex(arr, SIZE);
    int maxIndex = findMaxIndex(arr, SIZE);

    // ���� ������ ���������� �� ������������� ��������
    swap(&arr[minIndex], &arr[maxIndex]);

    // ���� �������������� ������
    printf("������������� �����: ");
    for (int i = 0; i < SIZE; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
