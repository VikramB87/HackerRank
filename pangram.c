// https://www.hackerrank.com/challenges/pangrams
#include <stdio.h>
#include <ctype.h>

char alpha[26];
int flag = 0;
char str[1001];

#define ALL_ALPHA_FOUND 0x03ffffff

int main ()
{
        int i;
        int bit;

    gets(str);

    for (i = 0; str[i] != 0 && flag != ALL_ALPHA_FOUND; ++i) {
        if (isalpha (str[i])) {
            str[i] = tolower(str[i]);
            bit = str[i] - 'a';
            flag |= (1 << bit);
        }
    }
    if (flag == ALL_ALPHA_FOUND) printf ("pangram\n");
    else printf ("not pangram\n");
    return 0;
}
