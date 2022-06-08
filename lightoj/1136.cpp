#include<iostream>
#include<stdio.h>
#include<math.h>
typedef long long ll;

#define sll(x) scanf("%llu",&x);
#define sd(x) scanf("%d",&x);
#define slf(x) scanf("%lf",&x);
#define ptll(x) printf("%lld\n",x);
#define ps(s) printf("%s", s)
#define ForC(cs,t) for(int cs = 1 ; cs <= t ; cs++)
#define For4(i,n,s,inc) for(int i = s ; i < n ; i+=inc)


using namespace std;

// #define pii pair<int,int>

int main(){
    int t,a,b,output;
    sd(t);
    ForC(cs,t){
        cin >> a >> b;
        output = b-a;
        output = ceil((b-a)/2);
        printf("Case %d: %d\n", cs, output);
    }
    return 0;

}