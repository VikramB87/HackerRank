// https://www.hackerrank.com/challenges/utopian-tree
#include <stdio.h>
#include <math.h>

int main ()
{
    int t, n, i, r, s;

    scanf("%d", &t);
    for (i = 0; i < t; ++i) {
        scanf ("%d", &n);
        if (n == 0) {
            printf ("1\n");
            continue;
        }
        s = (n-1)/2 + 1;
        printf ("%d\n", s);
        r = (int) pow(2, s);
        r = r+(r - 1 - (n%2));
        printf ("%d\n", r);
    }
    return 0;
}
