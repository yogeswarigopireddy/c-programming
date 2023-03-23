#include <stdio.h>
int binarySearch(int arr[], int n, int x)
{
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == x) {
            return mid;
        }
        if (arr[mid] < x) {
            low = mid + 1;
        }
        
        else {
            high = mid - 1;
        }
    }
    return -1;
}
int main() {
    int arr[] = {28, 12, 15, 122, 10, 33, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 15;
    int result = binarySearch(arr, n, x);
    if (result != -1)
	 {
        printf("Given element %d is found at %d th position\n", x, result + 1);
    }
    else {
        printf("Element not found in array\n");
    }

    return 0;
}
