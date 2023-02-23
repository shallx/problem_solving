#include <iostream>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <list>
#define sd(x) scanf("%d", &x);
#define sdd(x, y) scanf("%d %d", &x, &y);
#define ForC(cs, t) for (int cs = 1; cs <= t; cs++)
using namespace std;
#define MAX 10

// vector<int> v[10];
vector<int> vec[MAX];
bool visited[MAX];

void cleanVisited(){
    for(int i=0;i<MAX;i++){
        visited[i] = false;
    }
}

void cleanAdj(int n){
    for(int i=0;i<n;i++){
        vec[i].clear();
    }
}

void dfs(int startIndex){
    visited[startIndex] = true;

    for(auto it = vec[startIndex].begin(); it!= vec[startIndex].end(); it++){
        if(!visited[*it]){
            visited[*it];
            dfs(*it);
        }
    }
}

int main()
{
    int t, v, a, x, y;
    string s;
    sd(t);
    ForC(cs, t)
    {
        sdd(v, a);
        ForC(i, a)
        {
            cin >> x >> y;
            vec[x].push_back(y);
            vec[y].push_back(x);
        }

        cleanVisited();
        cleanAdj(v);

    }
}