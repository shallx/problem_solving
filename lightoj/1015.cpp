#include<iostream>
#include<stdio.h>
#include<math.h>
typedef long long ll;

#define sll(x) scanf("%llu",&x);
#define sd(x) scanf("%d",&x);
#define ptll(x) printf("%lld\n",x);
#define ForC(cs,t) for(int cs = 1 ; cs <= t ; cs++)


using namespace std;

int main(){
    int t,n,x;
    sd(t);
    ForC(cs,t){
        int sum =0;
        sd(n);
        while(n--){
            sd(x);
            if(x > 0) sum+= x;

        }
        printf("Case %d: %d\n", cs, sum);
    }
    return 0;

}