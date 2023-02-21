#include<iostream>
#include<stdio.h>
#include<math.h>
typedef long long ll;

#define sd(x) scanf("%d",&x);
#define ForC(cs,t) for(int cs = 1 ; cs <= t ; cs++)


using namespace std;


int main(){
    // freopen("output.txt","w",stdout);
    int t,x;
    sd(t);
    ForC(cs,t){
        sd(x);
        printf("Case %d: %d\n", cs, x);
    }
    return 0;

}