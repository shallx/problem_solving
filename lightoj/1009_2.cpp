#include <iostream>
#include <vector>
#include <list>
#include <math.h>

#define sd(x) scanf("%d", &x);
#define sdd(x, y) scanf("%d %d", &x, &y);
#define ForC(cs, t) for (int cs = 1; cs <= t; cs++)

using namespace std;

class Graph
{
    int nodes;
    vector<int> *v;
    vector<bool> visited;
    vector<bool> lykans;
    vector<bool> vampires;
    int lykansCount = 0;
    int vampiresCount = 0;

public:
    Graph(int vertices);
    void addEdge(int src, int dest);
    int BFS(int startVertex);
};

Graph::Graph(int vertices)
{
    v = new vector<int>[vertices + 1];
    nodes = vertices + 1;
}

void Graph::addEdge(int src, int dest)
{
    v[src].push_back(dest);
    v[dest].push_back(src);
}

int Graph::BFS(int startVertex)
{

    for (int i = 0; i < nodes; i++)
    {
        visited.push_back(false);
        lykans.push_back(false);
        vampires.push_back(false);
    }

    list<int> queue;
    queue.push_back(startVertex);
    visited[startVertex] = true;
    lykans[startVertex] = true;
    lykansCount++;

    while (!queue.empty())
    {
        int currentNode = queue.front();
        // cout << "Visited: " << currentNode << endl;
        queue.pop_front();

        vector<int>::iterator it;

        for (it = v[currentNode].begin(); it != v[currentNode].end(); it++)
        {
            if (!visited[*it])
            {
                visited[*it] = true;
                queue.push_back(*it);
                if (lykans[currentNode])
                {
                    vampires[*it] = true;
                    vampiresCount++;
                }
                else
                {
                    lykans[*it] = true;
                    vampiresCount++;
                }
            }
        }
    }
    return max(lykansCount, vampiresCount);
}

int main()
{
    freopen("output.txt", "w", stdout);
    int t, u, v, n;
    sd(t);
    ForC(cs, t)
    {
        sd(n);
        Graph g(20001);
        ForC(i, n)
        {
            sdd(u, v);
            g.addEdge(u, v);
        }
        int result = g.BFS(1);
        printf("Case %d: %d\n", cs, result);
    }

    return 0;
}
