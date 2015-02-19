//https://www.hackerrank.com/challenges/quicksort1
#include <stdio.h>

#define MAX_SIZE 1000
int arr[MAX_SIZE];

void swap (int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}

void partition (int sz)
{
    int p = arr[0];
    int i = 1, j = sz-1;

    while (arr[i] < p) {
        ++i;
    }
    while ((arr[j] > p) && (j > i)) {
        --j;
    }
    if (j > i) {
        swap (arr+j, arr+i);
    }

}
int main ()
{
    return 0;
}
