#include <iostream>
#include <vector>
using namespace std;
vector<int> adj_list[1004];
bool visited[1004];

void bfs(int src) {

  // base case of recursion
  // Doesn't need here, b/ of visited check;
  cout << src << " ";
  visited[src] = true;

  for (int child : adj_list[src])
    if (!visited[child])
      bfs(child);
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

  memset(visited, false, sizeof(visited));
  bfs(0);
  return 0;
}