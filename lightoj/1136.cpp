#include<iostream>
#include<stdio.h>
#include<math.h>
typedef long long ll;

#define sd(x) scanf("%d",&x);
#define ForC(cs,t) for(int cs = 1 ; cs <= t ; cs++)


using namespace std;

// #define pii pair<int,int>
int cumulatiaveSum(int n){
    int indivisibleNumber = 0;
    if(n%3 == 0){
        indivisibleNumber = n/3;
    }
    else if(n%3== 1){
        indivisibleNumber = n/3 + 1;
    } else {
        indivisibleNumber = n/3 + 1;
    }
    return n - indivisibleNumber;
}

int main(){
    int t,a,b,output;
    sd(t);
    ForC(cs,t){
        cin >> a >> b;
        printf("Case %d: %d\n", cs, cumulatiaveSum(b)-cumulatiaveSum(a-1));
    }
    return 0;

}