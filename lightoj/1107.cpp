#include<iostream>
#include<stdio.h>
#include<math.h>
typedef long long ll;

#define sd(x) scanf("%d",&x);
#define sdd(x,y) scanf("%d %d",&x, &y);
#define ForC(cs,t) for(int cs = 1 ; cs <= t ; cs++)
#define ps(s) printf("%s\n", s)


using namespace std;

int main(){
    int t, x1, x2, y1,y2,m,mX,mY,output;
    sd(t);
    ForC(cs,t){
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        sd(m);
        printf("Case %d:\n", cs);
        while(m--){
            sdd(mX, mY);
            
            ((mX > x1 && mX < x2) &&( mY > y1 && mY < y2)) ? printf("Yes\n") : printf("No\n");
        }
    }
    return 0;

}