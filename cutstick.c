// https://www.hackerrank.com/challenges/cut-the-sticks

#include <stdio.h>
#include <stdlib.h>

#define MAX_N 1000
int arr[MAX_N];

int comparer (const void *p1, const void *p2)
{
    return *(int*)p1 - *(int*)p2;
}

int main ()
{
    int n, i;
    int min;
    int sum;
    scanf ("%d", &n);
    for (i = 0; i < n; ++i) {
        scanf ("%d", &arr[i]);
    }

    qsort ((void*) arr, (size_t) n, sizeof(int), comparer);

    i   = 0;
    sum = 0;
    while (i < n) {
        printf ("%d\n", n-i);
        min  = (arr[i] - sum);
        ++i;
        while ((i < n) && (arr[i] - sum) == min) ++i;
        sum += min;
    }
    return 0;
}


