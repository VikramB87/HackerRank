// https://www.hackerrank.com/challenges/insertionsort1
// https://www.hackerrank.com/challenges/insertionsort2
// https://www.hackerrank.com/challenges/runningtime
#include <stdio.h>

#define MAX_SIZE 1000
int arr[MAX_SIZE];

int insert_sort (int s)
{
    int i, e, c = 0;

    e = arr[s-1];
    for (i = s-2; i >= 0 && e < arr[i]; --i) {
        arr[i+1] = arr[i];
        ++c;
    }

    arr[i+1] = e;
    return c;
}

int main ()
{
    int i, s;
    int c = 0;
    scanf ("%d", &s);
    for (i = 0; i < s; ++i) {
        scanf ("%d", arr+i);
    }

    for (i = 2; i <= s; ++i) {
        c += insert_sort (i);
        //for (k = 0; k < s; ++k) {
            //printf ("%d ", arr[k]);
        //}
        //printf ("\n");
    }
    printf ("%d\n", c);

    return 0;
}
