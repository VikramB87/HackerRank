// https://www.hackerrank.com/challenges/lonely-integer
#include <stdio.h>

#define MAX 100

int main ()
{
        int n, a[MAX+1] = {0};
        int i, x;

    scanf ("%d", &n);
    for (i = 0; i < n; ++i) {
        scanf ("%d", &x);

        ++a[x];
    }

    for (i = 0; i < MAX+1; ++i) {
        if (a[i] == 1) printf ("%d\n", i);
    }
    return 0;
}
