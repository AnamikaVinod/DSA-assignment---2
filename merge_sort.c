#include <stdio.h>

void merge(int a[], int low, int mid, int high)
{
    int i = low, j = mid + 1, k = 0;
    int temp[100];

    while (i <= mid && j <= high)
    {
        if (a[i] <= a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }

    while (i <= mid)
        temp[k++] = a[i++];

    while (j <= high)
        temp[k++] = a[j++];

    for (i = low, k = 0; i <= high; i++, k++)
        a[i] = temp[k];

    printf("After merging positions %d to %d: ", low, high);
    for (i = low; i <= high; i++)
        printf("%d ", a[i]);
    printf("\n");
}

void mergeSort(int a[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;

        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);

        merge(a, low, mid, high);
    }
}

int main()
{
    int a[] = {324, 125, 456, 218, 102, 389, 275, 147};
    int n = 8;

    printf("Original array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n\nMerge Sort steps:\n");

    mergeSort(a, 0, n - 1);

    printf("\nFinal sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
