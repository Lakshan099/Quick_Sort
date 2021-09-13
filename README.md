
# Quick_Sort

Quick sort is a highly efficient sorting algorithm and is based on partitioning of array of data into smaller arrays. A large array is partitioned into two arrays one of which holds values smaller than the specified value, say pivot, based on which the partition is made and another array holds values greater than the pivot value.

Quicksort partitions an array and then calls itself recursively twice to sort the two resulting subarrays. This algorithm is quite efficient for large-sized data sets as its average and worst-case complexity are O(n2), respectively.

![quick-sort-pseudo-code](https://user-images.githubusercontent.com/81616253/133014874-2862069c-64b5-4385-8852-76bda95cc663.png)

```

#include <stdio.h>

void quick_sort(int[], int, int);
int partition(int[], int, int);

int main()
{
    int a[50], n, i;
    printf("How many elements?");
    scanf("%d", &n);
    printf("\nEnter array elements:");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    quick_sort(a, 0, n - 1);
    printf("\nArray after sorting:");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}

void quick_sort(int a[], int l, int u)
{
    int j;
    if (l < u)
    {
        j = partition(a, l, u);
        quick_sort(a, l, j - 1);
        quick_sort(a, j + 1, u);
    }
}

int partition(int a[], int l, int u)
{
    int v, i, j, temp;
    v = a[l];
    i = l;
    j = u + 1;
    do
    {
        do
            i++;
        while (a[i] < v && i <= u);
        do
            j--;
        while (v < a[j]);
        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    } while (i < j);
    a[l] = a[j];
    a[j] = v;
    return (j);
}

```
