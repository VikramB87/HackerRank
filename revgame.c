// https://www.hackerrank.com/challenges/reverse-game
#include <stdio.h>

int main ()
{
    int t, n, k, i, r;
    scanf ("%d", &t);

    for (i = 0; i < t; ++i) {
        scanf ("%d%d", &n, &k);

        if (k < n/2) {
            r = 1 + 2*k;
        } else if (k > n/2) {
            r = ((n - 1) - k)*2;
        } else {
            if (n%2) {
                r = n-1;
            } else {
                r = ((n - 1) - k)*2;
            }
        }

        printf ("%d\n", r);
    }

    return 0;
}

