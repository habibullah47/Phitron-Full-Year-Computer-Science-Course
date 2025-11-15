#include <iostream>
#include <queue>
#include <vector>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];
int level[1005];
int parent[1005];

void bfs(int src) {
  queue<int> q;
  q.push(src);
  vis[src] = true;
  level[src] = 0;

  while (!q.empty()) {
    int par = q.front();
    q.pop();

    for (int child : adj_list[par]) {
      if (!vis[child]) {
        q.push(child);
        level[child] = level[par] + 1;
        vis[child] = true;
        parent[child] = par;
      }
    }
  }
}

int main() {
  int n, e;
  cin >> n >> e;

  while (e--) {
    int a, b;
    cin >> a >> b;
    adj_list[a].push_back(b);
    adj_list[b].push_back(a);
  }

  memset(vis, false, sizeof(vis));
  memset(level, -1, sizeof(level));
  memset(parent, -1, sizeof(parent));
  int src, dst;
  cin >> src >> dst;

  bfs(src);
  vector<int> path;
  int node = dst;
  while (node != -1) {
    path.push_back(node);
    node = parent[node];
  }

  for (auto i = path.rbegin(); i != path.rend(); i++) {
    cout << *i << " ";
  }

  return 0;
}