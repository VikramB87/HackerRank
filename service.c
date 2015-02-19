// https://www.hackerrank.com/challenges/service-lane
#include <stdio.h>

#define MAX_N 1000
int width[MAX_N];

int main ()
{
    int n, t, i, a, b, min;
    scanf ("%d %d", &n, &t);
    for (i = 0; i < n; ++i) {
        scanf ("%d", width+i);
    }
    for (i = 0; i < t; ++i) {
        scanf ("%d%d", &a, &b);

        min = width[a];
        while (++a <= b) {
            if (width[a] < min) min = width[a];
        }
        printf ("%d\n", min);
    }
    return 0;
}
