#include<stdio.h>
#include<algorithm> // sort
#include<cstring> // memset
#include <utility> // pair


using namespace std;
#define pii pair<int,int>

#define sd(x) scanf("%d",&x);
#define ForC(cs,t) for(int cs = 1 ; cs <= t ; cs++)


const int N = 1001;
pii arr[N];


bool cmp(pii a, pii b){
    if(b.second < a.second) return false;
    else if(b.second == a.second && b.first > a.first) return false;
    return true;
}


void findDivisor(){
    ForC(i,N){
        arr[i].first = i;
        for(int j=i; j<=N;j+=i){
            arr[j].second++;
        }
    }
}

int main(){
    int t,cs,n;
    findDivisor();
    sort(arr, arr+N, cmp);
    
    sd(t);
    ForC(cs,t){
        sd(n);
        printf("Case %d: %d\n", cs, arr[n].first);
        
    }
    return 0;
}