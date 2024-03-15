#include <iostream>
using namespace std;

void merge(int* arr, int* left, int* right, int left_size, int right_size) {
    int i = 0, j = 0, k = 0;

    while (i < left_size && j < right_size) {
        if (left[i] <= right[j]) {
            arr[k++] = left[i++];
        } else {
            arr[k++] = right[j++];
        }
    }

    while (i < left_size) {
        arr[k++] = left[i++];
    }

    while (j < right_size) {
        arr[k++] = right[j++];
    }
}

void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}


void sort_array(int* arr, int arr_size) {
    if (arr_size <= 1)
        return;

    int mid = arr_size / 2;
    int left[mid];
    int right[arr_size - mid];

    for (int i = 0; i < mid; i++) {
        left[i] = arr[i];
    }
    for (int i = mid; i < arr_size; i++) {
        right[i - mid] = arr[i];
    }

    sort_array(left, mid);
    printArray(arr, arr_size);
    sort_array(right, arr_size - mid);
     printArray(arr, arr_size);
    merge(arr, left, right, mid, arr_size - mid);
}


int main() {
    int a[] = {1, 9, 3, 6, 5};
    int n = sizeof(a) / sizeof(a[0]);

    sort_array(a, n);

    cout << "Sorted Array: ";
    printArray(a, n);

    return 0;
}
