//https://www.hackerrank.com/challenges/the-love-letter-mystery/
#include <stdio.h>
#include <string.h>

#define MAX_CHARS 10001

char str[MAX_CHARS];

int main ()
{
    int t;
    int s;
    int i;
    int c;
    int j;

    scanf ("%d", &t);
    for (j = 0; j < t; ++j) {

        scanf ("%s", str);
        s = strlen(str)-1;

        c = 0;
        i = 0;
        while (i < s) {
            if (str[i] > str[s]) {
                c += str[i]-str[s];
            } else if (str[i] < str[s]) {
                c += str[s]-str[i];
            }
            i++;
            s--;
        }

        printf ("%d\n", c);
    }

    return 0;
}
