// https://www.hackerrank.com/challenges/rectangular-game
#include <stdio.h>

#define MAX 1000000
int main ()
{
    int i, n, a, b, ma = MAX, mb = MAX;
    scanf ("%d", &n);
    for (i = 0; i < n; ++i) {
        scanf ("%d%d", &a, &b);
        if (a < ma) ma = a;
        if (b < mb) mb = b;
    }

    printf ("%d", ma*mb);
    return 0;
}
