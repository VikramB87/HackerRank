// https://www.hackerrank.com/challenges/maxsubarray
#include <stdio.h>

#define MAX_SIZE 100000
int arr[MAX_SIZE];

int max_sub_array (int arr[], int sz, int *nc)
{
    int i;
    int max_here, max_so_far, max, allneg = 1;

    *nc = 0;
    max = max_here = max_so_far = arr[0];

    if (arr[0] > 0) {
        *nc = arr[0];
        allneg = 0;
    }
    for (i = 1; i < sz; ++i) {
        if (max_here + arr[i] > arr[i]) {
            max_here = max_here + arr[i];
        } else {
            max_here = arr[i];
        }
        if (max_here > max_so_far) max_so_far = max_here;
        if (arr[i] > 0) {
            *nc += arr[i];
            allneg = 0;
        } else if (arr[i] > max) {
            max = arr[i];
        }
    }
    if (allneg) *nc = max;
    return max_so_far;
}

int main ()
{
    int t, n, i, c, nc;

    scanf ("%d", &t);
    while (t--) {
        scanf ("%d", &n);

        for (i = 0; i < n; ++i) {
            scanf ("%d", arr+i);
        }

        c = max_sub_array (arr, n, &nc);
        printf ("%d %d\n", c, nc);
    }
    return 0;
}
