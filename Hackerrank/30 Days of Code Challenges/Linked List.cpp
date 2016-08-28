#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

class Node {
public:
  int data;
  Node *next;
  Node(int d) : data(d), next(NULL) {}
};

class Solution {
public:
  Node* insert(Node* head, int data) {
    Node* new_node = new Node(data);
    if (head == NULL) return new_node;
    Node* curr = head;
    while (curr) {
      if (curr->next == NULL) {
        curr->next = new_node;
        break;
      }
      curr = curr->next;
    }
    return head;
  }
  void display(Node* head) {
    Node* start = head;
    while (start) {
      cout << start->data << " ";
      start = start->next;
    }
  }
};

int main() {
  fast;
  Node* head = NULL;
  Solution mylist;
  int T, data;
  cin >> T;

  while(T--){
    cin >> data;
    head = mylist.insert(head, data);
  }

  mylist.display(head);
  return 0;
}
