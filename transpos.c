// https://www.hackerrank.com/challenges/keyword-transposition-cipher
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char keyword[8];
char msg[256];

int used[26];
int rmap[26];

static int comparer (const void *p1, const void *p2)
{
    return *(char*)p1 - *(char*)p2;
}

int main ()
{
    int n, i, s, j;
    scanf ("%d", &n);
    while (n--) {
        scanf ("%s", keyword);
        scanf ("%s", msg);

        s = strlen(keyword);
        qsort (keyword, s, sizeof(char), comparer);

        i = j = 0;
        while (i < s) {
            rmap[j] = keyword[i] - 'a';
            used[keyword[i] - 'a'] = 1;
            while ((i < s) && (keyword[i+1] == keyword[i])) ++i;
        }

        for (i = 0; i < 26; ++i) {
            if (
        }
    }


    return 0;
}
