#include <stdio.h>
int find_first_occurrence(int arr[], int N, int X) 
{
    for (int i = 0; i < N; i++) {
        if (arr[i] == X) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = { 2, 4, 6, 8, 10 };
    int N = sizeof(arr) / sizeof(arr[0]);
    int X = 6;
    int index = find_first_occurrence(arr, N, X);
    if (index == -1) {
        printf("Element not found");
    } else {
        printf("Element found at index %d", index);
    }
    return 0;
}

