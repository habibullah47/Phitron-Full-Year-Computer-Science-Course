// Question: Take two singly linked lists as input and check if their sizes are
// same or not.

// #include <iostream>
// using namespace std;

// class Node {
// public:
//   int val;
//   Node *next;

//   Node(int val) {
//     this->val = val;
//     this->next = NULL;
//   }
// };

// void insert_at_tail(Node *&head, Node *&tail, int val) {
//   Node *newNode = new Node(val);
//   if (head == NULL) {
//     head = newNode;
//     tail = newNode;
//     return;
//   }

//   tail->next = newNode;
//   tail = tail->next;
// }

// int size_of_linked_list(Node *head) {
//   int cnt = 0;
//   Node *tmp = head;
//   while (tmp != NULL) {
//     cnt++;
//     tmp = tmp->next;
//   }

//   return cnt;
// }

// int main() {
//   int s1 = 0;
//   int s2 = 0;

//   int t = 2;
//   while (t--) {
//     Node *head = NULL;
//     Node *tail = NULL;
//     int val;
//     while (true) {
//       cin >> val;
//       if (val == -1) {
//         break;
//       }

//       insert_at_tail(head, tail, val);
//     }
//     if (t == 1) {
//       s1 = size_of_linked_list(head);

//     } else {
//       s2 = size_of_linked_list(head);
//     }
//   }
//   if (s1 == s2) {
//     cout << "YES" << endl;
//   } else {
//     cout << "NO" << endl;
//   }
//   return 0;
// }

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


int main()
{
    int sizes[2] = {0,0};
    for(int i = 0; i < 2; i++){
        int val;
        while (cin >> val && val != -1) {
        sizes[i]++;
        }
    }
    cout <<(sizes[0]==sizes[1]?"YES":"NO");
    return 0;
}