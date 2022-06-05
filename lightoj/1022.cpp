#include<stdio.h>
#include<math.h>
typedef long long ll;

#define sll(x) scanf("%llu",&x);
#define sd(x) scanf("%d",&x);
#define slf(x) scanf("%lf",&x);
#define ptll(x) printf("%lld\n",x);
#define ForC(cs,t) for(int cs = 1 ; cs <= t ; cs++)


int main(){
    int t;
    double r,area;
    sd(t);
    ForC(cs,t){
        slf(r);
        area = (4*r*r)  - (2 * acos(0) * r*r);
        printf("Case %d: %0.2lf\n", cs, area);
    }
    return 0;

}