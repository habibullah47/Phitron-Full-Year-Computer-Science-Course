#include <iostream>
#include <ostream>
using namespace std;

// Node class definition
class Node {
public:
  int val;    // Value of the node
  Node *next; // Pointer to the next node

  // Constructor to initialize the node
  Node(int val) {
    this->val = val;   // Assign the value to the node
    this->next = NULL; // Initialize next pointer to NULL
                       //(since it's the last node for now)
  }
};

int main() {
  Node *head = new Node(10); // Create head node with value 10
  Node *a = new Node(20);    // Create node a with value 20
  Node *b = new Node(30);    // Create node b with value 30
  Node *c = new Node(40);    // Create node c with value 40

  // connection
  head->next = a; // Connect head to node a
  a->next = b;    // Connect node a to node b
  b->next = c;    // Connect node b to node c

  // Printing
  //   cout << head->val << endl;
  //   cout << head->next->val << endl;
  //   cout << head->next->next->val << endl;
  //   cout << head->next->next->next->val << endl;

  // Optimized print
  // We can't use head here directly. If we do so, head will lose for ever.
  // For that we take tmp variable.
  Node *tmp = head; // Create a temporary pointer to traverse the list

  // Traverse the list and print each node's value
  while (tmp != NULL) {
    cout << tmp->val << endl; // Print the value of the current node
    tmp = tmp->next;          // Move to the next node
  }

  tmp = head; // Reset tmp to head to print again

  // Traverse the list and print each node's value
  while (tmp != NULL) {
    cout << tmp->val << endl; // Print the value of the current node
    tmp = tmp->next;          // Move to the next node
  }

  return 0;
}