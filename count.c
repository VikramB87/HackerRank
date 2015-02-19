// https://www.hackerrank.com/challenges/countingsort1
//https://www.hackerrank.com/challenges/countingsort2
#include <stdio.h>

#define MAX_SIZE 1000000
#define MAX_VAL  99

int val_count[MAX_VAL+1] = {0};

int main ()
{
    int s, i, n, j;

    scanf ("%d", &s);
    for (i = 0; i < s; ++i) {
        scanf ("%d", &n);
        ++val_count[n];
    }

    for (i = 0; i <= MAX_VAL; ++i) {
        for (j = 0; j < val_count[i]; ++j) {
            printf ("%d ", i);
        }
    }
    printf ("\n");
    return 0;
}

