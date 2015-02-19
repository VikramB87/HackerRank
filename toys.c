// https://www.hackerrank.com/challenges/priyanka-and-toys

#include <stdio.h>
#include <stdlib.h>

#define MAX_COUNT 10000
int arr[MAX_COUNT];

static int comparer (const void *p1, const void *p2)
{
    return *(int*)p1 - *(int*)p2;
}

int main ()
{
    int n, i, count = 0, w;
    scanf ("%d", &n);
    for (i = 0; i < n; ++i) {
        scanf ("%d", &arr[i]);
    }

    qsort (arr, n, sizeof(int), comparer);
    i = 0;
    while (i < n) {
        w = arr[i];
        ++count;
        ++i;
        while (i < n && arr[i] <= count+4) ++i;
    }
    printf ("%d\n", count);
    return 0;
}

