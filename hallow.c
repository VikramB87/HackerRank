#include <stdio.h>

int main ()
{
    int t, i;
    unsigned long long k;

    scanf ("%d", &t);

    for (i = 0; i < t; ++i) {
        scanf ("%llu", &k);

        if (k%2) k = (k/2)*(k/2) + k/2;
        else k = (k/2)*(k/2);
        printf ("%llu\n", k);
    }
    return 0;
}
