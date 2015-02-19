// https://www.hackerrank.com/challenges/closest-numbers
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_SIZE 200000

int arr[MAX_SIZE];
int indices[MAX_SIZE];

int comparer (const void *p1, const void *p2)
{
    return *(int*)p1 - *(int*)p2;
}

int main ()
{
    int n, i, m;
    int min;
    int d;

    scanf ("%d", &n);
    for (i = 0; i < n; ++i) {
        scanf ("%d", &arr[i]);
    }
    qsort ((void*) arr, (size_t) n, sizeof(int), comparer);

    m = 0;
    indices[m++] = 0;
    min = abs (arr[1] - arr[0]);
    for (i = 2; i < n; ++i) {
        if ((d = abs (arr[i] - arr[i-1])) < min) {
            min = d;
            m = 0;
            indices[m++] = i-1;
        } else if (d == min) {
            indices[m++] = i-1;
        }
    }
    for (i = 0; i < m; ++i) {
        printf ("%d %d ", arr[indices[i]], arr[indices[i]+1]);
    }
    return 0;
}
