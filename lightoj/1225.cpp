#include<iostream>
#include<stdio.h>
#include<math.h>
typedef long long ll;

#define sd(x) scanf("%d",&x);
#define ForC(cs,t) for(int cs = 1 ; cs <= t ; cs++)
#define For(i,n) for(int i = 0 ; i < n ; i++)


using namespace std;

string solve(string s){
    int length = s.length();
    if(length == 1) return "Yes";
    else {
        bool flag = false;
        For(i,length/2){
            if(s[i] != s[length-i-1]){
                flag = 1;
                break;
            }
        }
        if(flag) return "No";
        return "Yes";
    }

}


int main(){
    int t;
    string s;
    sd(t);
    ForC(cs,t){
        cin >> s;
        printf("Case %d: %s\n", cs, solve(s).c_str());
    }
    return 0;

}