#include<stdio.h>
#include<iostream>
#include<cstring>

#define ForC(i,n) for(int i = 1 ; i <= n ; i++) 

#define sd(x) scanf("%d",&x);

using namespace std;

const int MOD = 10000007;


int a, b, c, d, e, f;
int dp[10010];


int fn(int n) {
    if( dp[n] != -1) return dp[n];
    if (n == 0) return a % MOD;
    if (n == 1) return b % MOD;
    if (n == 2) return c % MOD;
    if (n == 3) return d % MOD;
    if (n == 4) return e % MOD;
    if (n == 5) return f % MOD;
    dp[n] = fn(n-1) % MOD + fn(n-2) % MOD + fn(n-3) % MOD + fn(n-4) % MOD + fn(n-5) % MOD + fn(n-6) % MOD;
    return dp[n] % MOD;
}
int main() {
    int n, cases;
    sd(cases);

    ForC(cs, cases) {
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        memset(dp,-1,sizeof(dp));
        printf("Case %d: %d\n", cs, fn(n) % MOD);
    }
    return 0;
}