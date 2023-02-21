#include <iostream>
#include <vector>
#include <list>
#include <math.h>
#include <map>

#define sd(x) scanf("%d", &x);
#define sdd(x, y) scanf("%d %d", &x, &y);
#define ForC(cs, t) for (int cs = 1; cs <= t; cs++)

using namespace std;

map<int, bool> vis;
map<int, int> whichType;

void clear()
{
    vis.clear();
    whichType.clear();
}

class Graph
{
    int nodes;
    vector<int> *v;
public:
    int lykansCount = 0;
    int vampiresCount = 0;

public:
    Graph(int vertices);
    void addEdge(int src, int dest);
    void resetCount();
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

void Graph::resetCount()
{
    lykansCount = 0;
    vampiresCount = 0;
}

int Graph::BFS(int startVertex)
{

    list<int> queue;
    queue.push_back(startVertex);
    vis[startVertex] = true;
    whichType[startVertex] = 1;
    lykansCount++;

    while (!queue.empty())
    {
        int currentNode = queue.front();
        queue.pop_front();

        vector<int>::iterator it;

        for (it = v[currentNode].begin(); it != v[currentNode].end(); it++)
        {
            if (!vis[*it])
            {
                vis[*it] = true;
                queue.push_back(*it);
                if (whichType[currentNode] == 1)
                {
                    whichType[*it] = 2;
                    vampiresCount++;
                }
                else
                {
                    whichType[*it] = 1;
                    lykansCount++;
                }
            }
        }
    }
    return max(lykansCount, vampiresCount);
}

int main()
{
    // freopen("output.txt", "w", stdout);
    int t, u, v, n;
    sd(t);
    ForC(cs, t)
    {
        clear();
        sd(n);
        Graph g(20001);
        ForC(i, n)
        {
            sdd(u, v);
            g.addEdge(u, v);
            vis[u] = false;
            vis[v] = false;
        }
        // int result = g.BFS(1);
        int sum = 0;
        map<int, bool>::iterator it;
        for (map<int, bool>::iterator it = vis.begin(); it != vis.end(); it++)
        {
            if (!it->second)
            {
                g.resetCount();
                int res = g.BFS(it->first);
                sum += res;
            }
        }
        printf("Case %d: %d\n", cs, sum);
    }

    return 0;
}
