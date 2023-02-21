#include <iostream>
#include <vector>
#include <list>

#define sd(x) scanf("%d", &x);
#define sdd(x,y) scanf("%d %d", &x,&y);
#define ForC(cs, t) for (int cs = 1; cs <= t; cs++)

using namespace std;

class Graph
{
    int nodes;
    vector<int>* v;
    vector<bool> visited;

public:
    Graph(int vertices);
    void addEdge(int src, int dest);
    void BFS(int startVertex);
};

Graph::Graph(int vertices){
    v = new vector<int>[vertices+1];
    nodes = vertices+1;
}

void Graph::addEdge(int src, int dest) {
  v[src].push_back(dest);
  v[dest].push_back(src);
}

void Graph::BFS(int startVertex){

    for(int i=0; i<nodes; i++){
        visited.push_back(false);
    }

    list<int> queue;
    queue.push_back(startVertex);
    visited[startVertex] = true;

    while(!queue.empty()){
        int currentNode = queue.front();
        cout << "Visited: " << currentNode << endl;
        queue.pop_front();

        vector<int>::iterator it;

        for(it = v[currentNode].begin(); it != v[currentNode].end(); it++){
            if(!visited[*it]){
                visited[*it] = true;
                queue.push_back(*it);
            }
        }
    }

}

int main()
{
    int t, u, v, n;
    sd(t);
    ForC(cs, t)
    {
        sd(n);
        Graph g(100);
        ForC(i,n){
            sdd(u,v);
            g.addEdge(u,v);
        }
        g.BFS(1);
    }
}



