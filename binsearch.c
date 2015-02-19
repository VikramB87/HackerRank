// https://www.hackerrank.com/challenges/tutorial-intro
#include <stdio.h>

#define MAX_SIZE 1000

int main ()
{
    int arr[MAX_SIZE], n, v, i;
    int mid, low, high;

    scanf ("%d", &v);
    scanf ("%d", &n);
    for (i = 0; i < n; ++i) {
        scanf ("%d", &arr[i]);
    }

    high = n-1;
    low  = 0;
    while (low <= high) {
        mid = (low+high)/2;

        if (arr[mid] == v) {
            printf ("%d\n", mid);
            break;
        } else if (arr[mid] > v) {
            high = mid-1;
        } else {
            low = mid+1;
        }
    }

    return 0;
}
