#include <stdio.h>
#include <stdlib.h>

#define MAX_LIST_SIZE 100

int main()
 {
    int list[MAX_LIST_SIZE];
    int n, i, j;
    int is_duplicate;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
	{
        scanf("%d", &list[i]);
    }

    printf("Duplicate items:\n");
    for (i = 0; i < n; i++)
	 {
        is_duplicate = 0;
        for (j = i+1; j < n; j++)
		 {
            if (list[i] == list[j])
			 {
                is_duplicate = 1;
                break;
            }
        }
        if (is_duplicate)
		 {
            printf("%d ", list[i]);
        }
    }
    printf("\n");

    printf("Non-duplicate items:\n");
    for (i = 0; i < n; i++)
	 {
        is_duplicate = 0;
        for (j = i+1; j < n; j++) 
		{
            if (list[i] == list[j])
			 {
                is_duplicate = 1;
                break;
            }
        }
        if (!is_duplicate)
		{
            printf("%d ", list[i]);
        }
    }
    printf("\n");

    return 0;
}

