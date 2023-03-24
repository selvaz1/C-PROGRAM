#include <stdio.h>
#include <string.h>

#define MAX_NAMES 100

void swap(char *a, char *b) {
    char temp[100];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

void sort_names(char names[][100], int n, int order) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if ((order == 1 && strcmp(names[i], names[j]) > 0) ||
                (order == 2 && strcmp(names[i], names[j]) < 0)) {
                swap(names[i], names[j]);
            }
        }
    }
}

int main() {
    char names[MAX_NAMES][100];
    int n, i, order;

    printf("Enter the number of names: ");
    scanf("%d", &n);

    printf("Enter the names:\n");
    for (i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }

    printf("Enter the sort order:\n");
    printf("1. Ascending\n");
    printf("2. Descending\n");
    scanf("%d", &order);

    sort_names(names, n, order);

    printf("Sorted names:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}

