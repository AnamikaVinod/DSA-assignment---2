#include <stdio.h>

int partition(int a[], int low, int high)
{
    int pivot = a[high];
    int i = low - 1;
    int temp;

    for (int j = low; j < high; j++)
    {
        if (a[j] < pivot)
        {
            i++;

            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }

    temp = a[i + 1];
    a[i + 1] = a[high];
    a[high] = temp;

    printf("Partition with pivot %d: ", pivot);
    for (int k = low; k <= high; k++)
        printf("%d ", a[k]);
    printf("\n");

    return i + 1;
}

void quickSort(int a[], int low, int high)
{
    if (low < high)
    {
        int p = partition(a, low, high);

        quickSort(a, low, p - 1);
        quickSort(a, p + 1, high);
    }
}

int main()
{
    int a[] = {324, 125, 456, 218, 102, 389, 275, 147};
    int n = 8;

    printf("Original array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n\nQuick Sort partition steps:\n");

    quickSort(a, 0, n - 1);

    printf("\nFinal sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
