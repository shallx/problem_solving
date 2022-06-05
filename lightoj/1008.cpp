#include<iostream>
#include<stdio.h>
#include<math.h>
typedef long long ll;

#define sll(x) scanf("%llu",&x);
#define ptll(x) printf("%lld\n",x);
#define ForC(i,n) for(int i = 1 ; i <= n ; i++)


using namespace std;

bool isEven(ll numb){
    if(numb%2==0) return true;
    return false;
}

int main(){
    ll t,s,root,x,y, square;
    sll(t);
    ForC(cs,t){
        sll(s);
        root = ceil(sqrt(s));
        square = root*root;
        if(!isEven(root)){
            if(square-s < root){
                y = root;
                x = (square - s)+1;
            } else {
                x = root;
                y = s - (root-1)*(root-1);
            }

        } else {
            if(square-s < root){
                x = root;
                y = (square - s)+1;
            } else {
                y = root;
                x = s - (root-1)*(root-1);

            }

        }

        printf("Case %d: %llu %llu\n", cs, x, y);

    }
    return 0;
}