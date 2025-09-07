/**
 * @file 6.9_insert_at_tail_optimized.cpp
 * @brief This file demonstrates an optimized insertion at the tail of a singly
 * linked list.
 *
 * The traditional approach to inserting at the tail of a singly linked list has
 * a time complexity of O(n) for each insertion, resulting in O(n*n) complexity
 * for multiple insertions. This implementation aims to optimize this process.
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
  tail = newNode;
}

void printing_linked_list(Node *head) {
  Node *tmp = head;
  while (tmp != NULL) {
    cout << tmp->val << endl;
    tmp = tmp->next;
  }
}

int main() {
  Node *head = new Node(10);
  Node *a = new Node(20);
  Node *tail = new Node(30);

  head->next = a;
  a->next = tail;

  insert_at_tail(head, tail, 40);
  insert_at_tail(head, tail, 50);
  insert_at_tail(head, tail, 60);

  printing_linked_list(head);

  return 0;
}