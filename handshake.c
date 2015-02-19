// https://www.hackerrank.com/challenges/handshake
#include <stdio.h>

unsigned long long combi(int n,int k)
{
    unsigned long long ans=1;
    k = k > (n-k) ? (n-k) : k;

    for(int j = 1; j<=k ;j++,n--)
    {
        if(n%j==0) {
            ans *= n/j;
        } else if(ans%j==0) {
            ans = (ans/j)* n;
        } else {
            ans = (ans*n)/j;
        }
    }

    return ans;
}

int main ()
{
    int t, n;
    scanf ("%d", &t);
    while (t--) {
        scanf ("%d", &n);
        printf ("%llu\n", (((long long)n)*(n-1))/2);
    }

    return 0;
}

