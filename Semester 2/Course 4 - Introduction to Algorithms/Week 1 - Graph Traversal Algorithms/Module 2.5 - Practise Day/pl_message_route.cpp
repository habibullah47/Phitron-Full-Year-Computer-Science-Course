#include <cstring>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
vector<int> adj_list[10005];
vector<int> levelNode;
bool vis[10005];
int level[10005];
int parent[10005];
int compB = 0;

void bfs(int src) {
  queue<int> q;
  q.push(src);
  vis[src] = true;
  level[src] = 1;

  while (!q.empty()) {
    int par = q.front();
    q.pop();

    levelNode.push_back(par);
    compB++;
    for (int child : adj_list[par]) {
      if (!vis[child]) {
        q.push(child);
        vis[child] = true;
        level[child] = level[par] + 1;
        parent[child] = par;
      }
    }
  }
}
int main() {
  int n, e;
  cin >> n >> e;

  int compA = 0;
  while (e--) {
    int a, b;
    cin >> a >> b;
    adj_list[a].push_back(b);
    adj_list[b].push_back(a);
    compA++;
  }

  memset(vis, false, sizeof(vis));
  memset(level, -1, sizeof(level));
  memset(parent, -1, sizeof(parent));
  bfs(1);

  int node = levelNode.back();
  int cnt = 0;

  vector<int> path;
  while (node != -1) {
    path.push_back(node);
    node = parent[node];
    cnt++;
  }

  if (compA != compB)
    cout << "IMPOSSIBLE";
  else {
    cout << cnt << endl;
    for (auto it = path.rbegin(); it != path.rend(); it++) {
      cout << *it << " ";
    }
  }
  // Todo: If there are no routes, print "IMPOSSIBLE".
  return 0;
}