#include <stdio.h>

#define MAX 100001
char input[MAX];

int main ()
{
    int count[26] = {0};
    int i;
    int odd, someodd = 0;
    int eo[2] = {0};

    gets (input);

    for (i = 0; input[i] != 0; ++i) {
        ++count[input[i] - 'a'];
    }

    odd = i%2;
    for (i = 0; i < 26; ++i) {
        if (count[i] % 2) {
            if (!odd || someodd) {
                printf ("NO\n");
                return 0;
            }
            someodd = 1;
        }
    }
    printf ("YES\n");
    return 0;
}
