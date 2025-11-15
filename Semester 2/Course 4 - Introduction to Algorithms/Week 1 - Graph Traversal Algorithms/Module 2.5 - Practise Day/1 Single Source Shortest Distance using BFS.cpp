#include <iostream>
#include <queue>
#include <vector>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];
int level[1005];

void bfs(int src) {
  queue<int> q;
  q.push(src);
  vis[src] = true;
  level[src] = 0;

  while (!q.empty()) {
    int par = q.front();
    q.pop();

    // cout << par << endl;
    cout << "Processing node: " << par << " at level: " << level[par] << endl;
    for (int child : adj_list[par]) {
      if (!vis[child]) {
        q.push(child);
        level[child] = level[par] + 1;
        vis[child] = true;
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
  bfs(0);

  // Intended level of 4
  cout << level[6] << endl;
  return 0;
}