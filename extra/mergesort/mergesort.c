#include <stdio.h>

#define max 10

int a[11] = {7, 14, 10, 6, 27, 1, 33, 35, 31, 44, 0};
int b[10];

void merging(int first, int mid, int last)
{
    int start1 = first;
    int start2 = mid + 1;
    int i = first;

    while (start1 <= mid && start2 <= last)
    {
        if (a[start1] >= a[start2])
        {
            b[i] = a[start2];
            start2++;
        }
        else
        {
            b[i] = a[start1];
            start1++;
        }
        i++;
    }
    while (start1 <= mid)
        b[i++] = a[start1++];

    while (start2 <= last)
        b[i++] = a[start2++];

    for (i = first; i <= last; i++)
        a[i] = b[i];
}

void sort(int low, int high)
{
    int mid;

    if (low < high)
    {
        mid = (low + high) / 2;
        sort(low, mid);
        sort(mid + 1, high);
        merging(low, mid, high);
    }
    else
    {
        return;
    }
}

int main()
{
    int i;

    for (i = 0; i <= max; i++)
        printf("%d ", a[i]);

    printf("\n");
    sort(0, max);

    for (i = 0; i <= max; i++)
        printf("%d ", b[i]);
}