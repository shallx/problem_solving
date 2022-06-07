#include<iostream>
#include<stdio.h>
#include<math.h>
typedef long long ll;

#define sd(x) scanf("%d",&x);
#define sdd(x,y) scanf("%d %d",&x, &y);
#define ForC(cs,t) for(int cs = 1 ; cs <= t ; cs++)


using namespace std;

int main(){
    int t,myPos, liftPos;
    sd(t);
    ForC(cs,t){
        sdd(myPos, liftPos);
        int output = (abs(myPos - liftPos) + myPos)*4 + 19;
        printf("Case %d: %d\n", cs, output);
    }
    return 0;

}