#include<iostream>
#include<stdio.h>
#include<math.h>
#include<map>
typedef long long ll;

#define sd(x) scanf("%d",&x);
#define ForC(cs,t) for(int cs = 1 ; cs <= t ; cs++)


using namespace std;


int main(){
    freopen("output.txt","w",stdout);
    int t,u,v,n;
    sd(t);
    ForC(cs,t){
        map<int,bool> a,b;
        sd(n);
        while(n--){
            scanf("%d %d", &u, &v);
            if(a[u]){
                b[v] = true;
            }
            else {
                a.erase(u);
                if(b[u]){
                    a[v] = true;
                }
                else if(a[v]){
                    b.erase(u);
                    b[u] = true;
                }
                else if(b[v]){
                    b.erase(u);
                    a.erase(v);
                    a[u] = true;
                }
                else {
                    b.erase(u);
                    a.erase(v);
                    b.erase(v);
                    a[u] = true;
                    b[v] = true;
                }
            }
        }
        printf("Case %d: %d\n", cs, max(a.size(), b.size()));
    }
    return 0;

}