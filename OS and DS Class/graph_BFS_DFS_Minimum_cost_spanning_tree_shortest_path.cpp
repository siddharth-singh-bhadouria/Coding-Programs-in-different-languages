#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <climits>
#include <algorithm>

using namespace std;

class Graph {
private:
    int V;
    vector<pair<int, int> >* adj;

public:
    Graph(int vertices) {
        V = vertices;
        adj = new vector<pair<int, int> >[V];
    }

    void addEdge(int u, int v, int weight) {
        adj[u].push_back(make_pair(v, weight));
        adj[v].push_back(make_pair(u, weight));
    }

    void bfs(int start) {
        vector<bool> visited(V, false);
        queue<int> q;
        visited[start] = true;
        q.push(start);
        while (!q.empty()) {
            int current = q.front();
            q.pop();
            cout << current << " ";
            for (auto neighbor : adj[current]) {
                int v = neighbor.first;
                if (!visited[v]) {
                    visited[v] = true;
                    q.push(v);
                }
            }
        }
        cout << endl;
    }

    void dfs(int start) {
        vector<bool> visited(V, false);
        stack<int> s;
        visited[start] = true;
        s.push(start);
        while (!s.empty()) {
            int current = s.top();
            s.pop();
            cout << current << " ";
            for (auto neighbor : adj[current]) {
                int v = neighbor.first;
                if (!visited[v]) {
                    visited[v] = true;
                    s.push(v);
                }
            }
        }
        cout << endl;
    }

    void primMST() {
        vector<int> key(V, INT_MAX);
        vector<bool> mst(V, false);
        vector<int> parent(V, -1);
        priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > pq;
        pq.push(make_pair(0, 0));
        key[0] = 0;
        while (!pq.empty()) {
            int u = pq.top().second;
            pq.pop();
            mst[u] = true;
            for (auto neighbor : adj[u]) {
                int v = neighbor.first;
                int weight = neighbor.second;
                if (!mst[v] && key[v] > weight) {
                    key[v] = weight;
                    parent[v] = u;
                    pq.push(make_pair(key[v], v));
                }
            }
        }
        for (int i = 1; i < V; i++) {
            cout << parent[i] << " - " << i << " : " << key[i] << endl;
        }
    }

    void dijkstra(int start) {
        vector<int> dist(V, INT_MAX);
        vector<bool> visited(V, false);
        dist[start] = 0;
        for (int i = 0; i < V - 1; i++) {
            int minDist = INT_MAX, minIndex;
            for (int j = 0; j < V; j++) {
                if (!visited[j] && dist[j] < minDist) {
                    minDist = dist[j];
                    minIndex = j;
                }
            }
            visited[minIndex] = true;
            for (auto neighbor : adj[minIndex]) {
                int v = neighbor.first;
                int weight = neighbor.second;
                if (!visited[v] && dist[minIndex] != INT_MAX && dist[minIndex] + weight < dist[v]) {
                    dist[v] = dist[minIndex] + weight;
                }
            }}}

};
int main() {
    Graph g(6);
    g.addEdge(0, 1, 5);
    g.addEdge(0, 2, 1);
    g.addEdge(1, 2, 2);
    g.addEdge(1, 3, 1);
    g.addEdge(2, 3, 4);
    g.addEdge(2, 4, 8);
    g.addEdge(3, 4, 3);
    g.addEdge(3, 5, 6);
    g.addEdge(4, 5, 9);

    cout << "BFS traversal: ";
    g.bfs(0);

    cout << "DFS traversal: ";
    g.dfs(0);

    cout << "Minimum cost spanning tree (Prim's algorithm): " << endl;
    g.primMST();

    cout << "Shortest path from node 0 (Dijkstra's algorithm): " << endl;
    g.dijkstra(0);

    return 0;
}