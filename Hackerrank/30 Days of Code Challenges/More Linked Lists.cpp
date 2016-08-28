#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

class Node {
public:
  int data;
  Node* next;
  Node(int d) : data(d), next(NULL) {}
};

class Solution {
public:
  Node* removeDuplicates(Node* head) {
    Node* curr = head;

    if (!curr) return head;
    while (curr->next) {
      Node* next = curr->next;
      if (curr->data == next->data) {
        curr->next = next->next;
      }
      else curr = curr->next;
    }

    return head;
  }

  Node* insert(Node* head, int data) {
     Node* p = new Node(data);
     if (!head) head = p;
     else if (!head->next) head->next = p;
     else {
      Node *start = head;
      while (start->next)
        start = start->next;
      start->next = p;
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

  while (T--) {
    cin >> data;
    head = mylist.insert(head, data);
  }

  head = mylist.removeDuplicates(head);
  mylist.display(head);

  return 0;
}
