#include<iostream>
#include<stdio.h>
#include<math.h>
#include<deque>
typedef long long ll;

#define sd(x) scanf("%d",&x);
#define sdd(x,y) scanf("%d %d", &x,&y);
#define ForC(cs,t) for(int cs = 1 ; cs <= t ; cs++)


using namespace std;

typedef deque<int> dqi;

const string uLeft = "pushLeft";
const string uRight = "pushRight";
const string oLeft = "popLeft";
const string oRight = "popRight";


int main(){
    // freopen("output.txt","w",stdout);
    int t,m,n,numb;
    string s;
    sd(t);
    ForC(cs,t){
        dqi deque;
        printf("Case %d:\n", cs);
        sdd(n,m);
        ForC(i,m){
            cin >> s;
            if(s == uLeft || s == uRight){
                cin >> numb;
            }
            if((s == uLeft || s == uRight) && deque.size() == n){
                printf("The queue is full\n");
            }
            else if(s == uLeft){
                deque.push_back(numb);
                printf("Pushed in left: %d\n", numb);
            } 
            else if(s == uRight) {
                deque.push_front(numb);
                printf("Pushed in right: %d\n", numb);
            }
            else if((s == oLeft || s == oRight) && deque.empty()){
                printf("The queue is empty\n");
            }
            else if(s == oLeft){
                printf("Popped from left: %d\n", deque.back());
                deque.pop_back();
            } else {
                
                printf("Popped from right: %d\n", deque.front());
                deque.pop_front();
            }
        }
       
    }
    return 0;

}