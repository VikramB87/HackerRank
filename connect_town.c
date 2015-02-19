//https://www.hackerrank.com/challenges/connecting-towns
#include <stdio.h>

int main ()
{
    int t, n, r, s = 1;
    scanf ("%d", &t);

    while (t--) {
        scanf ("%d", &n);
        s = 1;
        --n;
        while (n--) {
            scanf ("%d", &r);
            s *= r;
        }
        printf ("%d\n", s%12345678);
    }

    return 0;
}

