/*
Tail deletion in a singly linked list cannot be done in O(1) time complexity
because the tail node doesn't have a pointer to its previous node.
However, it is possible in a doubly linked list.
*/

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
    head = newNode;
    tail = newNode;
    return;
  }

  tail->next = newNode;
  tail = tail->next;
}

void printing_linked_list(Node *head) {
  Node *tmp = head;
  while (tmp != NULL) {
    cout << tmp->val << endl;
    tmp = tmp->next;
  }
}

// Deletes a node at a given index in the linked list
void delete_at_tail(Node *&head, Node *&tail, int idx) {

  Node *tmp = head;
  // Traverse to the node just before the node to be deleted
  for (int i = 1; i < idx; i++) {
    tmp = tmp->next;
  }

  Node *deleteNode = tmp->next; // Node to be deleted
  tmp->next = deleteNode->next; // Adjust the next pointer of the previous
  delete deleteNode;            // Deallocate memory
  tail = tmp;
}

int main() {
  Node *head = NULL;
  Node *tail = NULL;
  int val;

  // Input values to create the linked list
  while (true) {
    cin >> val;
    if (val == -1) {
      break;
    }
    insert_at_tail(head, tail, val);
  }

  // Input the index of the node to be deleted
  int idx;
  cin >> idx;

  delete_at_tail(head, tail, idx);

  // Print the linked list after deletion
  printing_linked_list(head);
  cout << "tail is " << tail->val << endl;
  return 0;
}