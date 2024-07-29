#include <stdio.h>

#define MAX_SIZE 50

// Hàm nhập vào số lượng phần tử của mảng
int enterSize() {
    int n;
    do {
        printf("Nhap so luong phan tu cua mang (2 <= n <= 50): ");
        scanf("%d", &n);
    } while (n < 2 || n > MAX_SIZE);
    return n;
}

// Hàm nhập dữ liệu cho mảng
void enterArray(float arr[], int n) {
    printf("Nhap %d phan tu cua mang:\n", n);
    for (int i = 0; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%f", &arr[i]);
    }
}

// Hàm hiển thị mảng
void displayArray(float arr[], int n) {
    printf("Mang da nhap la:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");
}

// Hàm sắp xếp mảng theo thứ tự tăng dần
void sortArray(float arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Hoán đổi giá trị của hai phần tử
                float temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    float arr[MAX_SIZE];

    // Nhập số lượng phần tử của mảng
    n = enterSize();

    // Nhập dữ liệu cho mảng
    enterArray(arr, n);

    // Hiển thị mảng vừa nhập
    displayArray(arr, n);

    // Sắp xếp mảng theo thứ tự tăng dần
    sortArray(arr, n);

    // Hiển thị mảng sau khi sắp xếp
    printf("Mang sau khi sap xep theo thu tu tang dan:\n");
    displayArray(arr, n);

    return 0;
}
//superman
