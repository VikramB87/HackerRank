//https://www.hackerrank.com/challenges/gem-stones
#include <stdio.h>

#define MAX_WORDS 100
#define MAX_LEN   1000
char str[MAX_LEN+1];
int occurence_flag[MAX_WORDS];

int main ()
{
    int i, n, j;
    int count = 0;
    int mask;
    scanf ("%d", &n);
    for (i = 0; i < n; ++i) {
        scanf ("%s", str);
        for (j = 0; str[j] != 0; ++j) {
            occurence_flag[i] |= (1 << (str[j] - 'a'));
        }
    }

    for (j = 0; j < 26; ++j) {
        mask = (1 << j);
        for (i = 0; i < n; ++i) {
            if ((occurence_flag[i] & mask) == 0) break;
        }
        if (i == n) ++count;
    }
    printf ("%d", count);
    return 0;
}
