// https://www.hackerrank.com/challenges/cavity-map
#include <stdio.h>

#define MAX_N 100

char map[MAX_N][MAX_N];

int main ()
{
    int n, i, j;
    char d;

    scanf ("%d", &n);
    for (i = 0; i < n; ++i) {
        scanf ("%s", map[i]);
    }

    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j) {
            if ((i == 0) || (j == 0) || (i == n-1) || (j == n-1)) printf ("%c", map[i][j]);
            else {
                d = map[i][j];
                if (d > map[i-1][j] && (d > map[i+1][j]) && (d > map[i][j+1]) && (d > map[i][j-1])) printf ("X");
                else printf ("%c", map[i][j]);
            }
        }
        printf ("\n");
    }

    return 0;
}
