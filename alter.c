// https://www.hackerrank.com/challenges/alternating-characters
#include <stdio.h>

#define MAX_LEN 100001
char str[MAX_LEN];

int main ()
{
    int t, i, j;
    int c;

    scanf ("%d", &t);
    for (i = 0; i < t; ++i) {
        scanf ("%s", str);

        c = 0;
        for (j = 0; str[j+1] != 0; ++j) {
            if (str[j] == str[j+1]) ++c;
        }
        printf ("%d\n", c);
    }
    return 0;
}
