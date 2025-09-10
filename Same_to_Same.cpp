#include <cstddef>
#include <iostream>
using namespace std;
class Node {
public:
  int val;
  Node *next;

  Node(int val) {
    this->val = val;
    this->next = NULL;
  }
};

void insert_at_tail(Node *&head, Node *&tail, int val) {
  Node *newNode = new Node(val);

  if (head == NULL) {
    head = tail = newNode;
    return;
  }

  tail->next = newNode;
  tail = newNode;
}

void the_head(Node *&head) {
  Node *tail = NULL;

  int val;
  while (true) {

    cin >> val;

    if (val == -1) {
      break;
    }

    insert_at_tail(head, tail, val);
  }
}

int size_of_linked_list(Node *head) {
  int cnt = 0;
  Node *tmp = head;
  while (tmp != NULL) {
    cnt++;
    tmp = tmp->next;
  }

  return cnt;
}

int main() {
  Node *head1 = NULL;
  Node *head2 = NULL;

  the_head(head1);
  the_head(head2);
  int s1 = size_of_linked_list(head1);
  int s2 = size_of_linked_list(head2);

  //--
  int h1[s1];
  int cnt = 0;
  for (Node *i = head1; i != NULL; i = i->next) {
    h1[cnt++] = i->val;
  }

  //--
  int h2[s2];
  cnt = 0;
  for (Node *i = head2; i != NULL; i = i->next) {
    h2[cnt++] = i->val;
  }
  bool flag = true;

  int sz = s1;
  if(s1 < s2){
    sz = s2;
  }
  for (int i = 0; i < sz; i++) {
    if (h1[i] != h2[i]) {
      flag = false;
    }
  }

  cout << (flag ? "YES" : "NO") << endl;

  return 0;
}