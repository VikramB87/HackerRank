#include <stdio.h>
#include <math.h>

unsigned long long fibo[] = {
 1,
 1,
 2,
 3,
 5,
 8,
 13,
 21,
 34,
 55,
 89,
 144,
 233,
 377,
 610,
 987,
 1597,
 2584,
 4181,
 6765,
 10946,
 17711,
 28657,
 46368,
 75025,
 121393,
 196418,
 317811,
 514229,
 832040,
 1346269,
 2178309,
 3524578,
 5702887,
 9227465,
 14930352,
 24157817,
 39088169,
 63245986,
 102334155,
 165580141,
 267914296,
 433494437,
 701408733,
 1134903170,
 1836311903,
 2971215073,
 4807526976,
 7778742049
};


int main ()
{
    int i, t, j;
    unsigned long long n;

    scanf ("%d", &t);
    for (i = 0; i < t; ++i) {
        scanf ("%llu", &n);

        for (j = 0; j < sizeof(fibo)/sizeof(fibo[0]); ++j) {
            if (n == fibo[j]) break;
        }
        if (j < sizeof(fibo)/sizeof(fibo[0])) printf ("IsFibo\n");
        else printf ("IsNotFibo\n");
    }
    return 0;
}
