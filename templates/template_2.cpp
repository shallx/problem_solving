#include<iostream>
#include<stdio.h>
#include<math.h>
typedef long long ll;

#define sll(x) scanf("%llu",&x);
#define sd(x) scanf("%d",&x);
#define slf(x) scanf("%lf",&x);
#define ptll(x) printf("%lld\n",x);
#define ForC(cs,t) for(int cs = 1 ; cs <= t ; cs++)


using namespace std;

int main(){
    int t,x;
    sd(t);
    ForC(cs,t){
        sd(x);
        printf("Case %d: %d\n", cs, x);
    }
    return 0;

}