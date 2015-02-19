// https://www.hackerrank.com/challenges/encryption
#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAX_LEN 81
char str[MAX_LEN+1];

int main ()
{
    int l;
    int r, c;
    int i, j;

    scanf ("%s", str);
    l = strlen(str);
    c = r = (int) sqrt (l);
    if (c*r < l) ++c;

    for (i = 0; i < c; ++i) {
        for (j = i; j < l; j += c) printf ("%c", str[j]);
        printf (" ");
    }
    printf ("\n");
    return 0;
}
