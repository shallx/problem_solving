#include<iostream>
#include<stdio.h>
#include<math.h>
typedef long long ll;

#define sd(x) scanf("%d",&x);
#define sdd(x,y) scanf("%d %d",&x, &y);
#define ForC(cs,t) for(int cs = 1 ; cs <= t ; cs++)


using namespace std;

int main(){
    int t, m, n,output;
    sd(t);
    ForC(cs,t){
        sdd(m, n);
        if(n == 1 || m == 1) output = m*n;
        else if(m == 2 || n == 2) {
            output = (m*n)/8*4;
            int remainder = (m*n)%8;
            output += min(4, remainder); 
        }
        else {
          output = ceil(double(m*n)/2);
        }
        printf("Case %d: %d\n", cs, output);
    }
    return 0;

}