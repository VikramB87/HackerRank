// https://www.hackerrank.com/challenges/flipping-bits
#include <stdio.h>

#define MAX 100

int main ()
{
    int n, i;
    unsigned num;

    scanf ("%d", &n);
    for (i = 0; i < n; ++i) {
        scanf ("%d", &num);

        printf ("%u\n", ~num);
    }


    return 0;
}

