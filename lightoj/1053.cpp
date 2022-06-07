#include<iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#include <fstream>
typedef long long ll;

#define sll(x) scanf("%llu",&x);
#define sd(x) scanf("%d",&x);
#define slf(x) scanf("%lf",&x);
#define ptll(x) printf("%lld\n",x);
#define ForC(cs,t) for(int cs = 1 ; cs <= t ; cs++)


using namespace std;

int main(){
    // freopen("output.txt","w",stdout);
    int t,a,b,c;
    sd(t);
    ForC(cs,t){
        scanf("%d %d %d", &a, &b, &c);
        int arr[] = {a,b,c};
        if(a+b+c == 0) {
            printf("Case %d: no\n", cs);
            continue;
        }
        sort(arr, arr+3);
        // printf("%d = %d + %d\n", arr[2]*arr[2], arr[0]*arr[0],arr[1]*arr[1]);
        if(arr[2]*arr[2] == arr[0]*arr[0] + arr[1]*arr[1]){
            printf("Case %d: yes\n", cs);
        } else {
            printf("Case %d: no\n", cs);
        }
    }
    return 0;

}