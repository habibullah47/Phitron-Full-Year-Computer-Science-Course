// all 3 representations for the following graph:

#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main() {
  int n, e;
  cin >> n >> e;

  // Adjucency Mat:
  int adj_mat[n + 1][n + 1];
  memset(adj_mat, 0, sizeof(adj_mat));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j) {
        adj_mat[i][j] = 1;
      }
    }
  }

  // Adjucency List:
  vector<int> adj_list[n + 1];

  // Edge list:
  vector<pair<int, int>> edge_list;
  while (e--) {
    int a, b;
    cin >> a >> b;
    adj_mat[a][b] = 1;
    adj_mat[b][a] = 1;

    adj_list[a].push_back(b);
    adj_list[b].push_back(a);

    edge_list.push_back({a, b});
  }
  cout << endl << "---Adjucency Matrix---" << endl;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << adj_mat[i][j] << " ";
    }
    cout << endl;
  }

  cout << endl << "---Adjucency List---" << endl;

  for (int i = 0; i < n; i++) {
    cout << i << " -> ";
    for (int x : adj_list[i]) {
      cout << x << " ";
    }
    cout << endl;
  }

  cout << endl << "---Edge List---" << endl;
  for (pair<int, int> x : edge_list) {
    cout << x.first << " " << x.second << endl;
  }
  return 0;
}
