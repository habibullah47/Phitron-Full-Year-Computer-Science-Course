#include <iostream>
#include <queue>
#include <vector>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];
int level[1005];

vector<int> bfs(int src, int lev) {
  vector<int> desc;
  queue<int> q;
  q.push(src);
  vis[src] = true;
  level[src] = 0;

  while (!q.empty()) {
    int par = q.front();
    q.pop();

    if (lev == level[par]) {
      desc.push_back(par);
    }
    if (level[par] > lev)
      break;

    for (int x : adj_list[par]) {
      if (!vis[x]) {
        q.push(x);
        vis[x] = true;
        level[x] = level[par] + 1;
      }
    }
  }

  return desc;
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

  int l;
  cin >> l;
  memset(vis, false, sizeof(vis));
  memset(level, -1, sizeof(level));

  vector<int> des = bfs(0, l);
  sort(des.begin(), des.end(), greater<int>());
  for (auto it = des.begin(); it != des.end(); it++) {
    cout << *it << " ";
  }
  return 0;
}