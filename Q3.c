#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);
    
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

int kthSmallest(int arr[], int low, int high, int k) {
    if (k > 0 && k <= high - low + 1) {
        int pos = partition(arr, low, high);
        if (pos - low == k - 1) {
            return arr[pos];
        } else if (pos - low > k - 1) {
            return kthSmallest(arr, low, pos - 1, k);
        } else {
            return kthSmallest(arr, pos + 1, high, k - pos + low - 1);
        }
    }
    return -1;
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    printf("Kth smallest element is %d", kthSmallest(arr, 0, n-1, k));
    return 0;
}
