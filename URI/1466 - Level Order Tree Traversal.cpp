#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

class Node {
public:
  int data;
  Node *left, *right;
  Node(int d) : data(d), left(NULL), right(NULL) {}
};

// BST (Binary Search Tree)
class BST {
public:
  Node* insert(Node* root, int data) {
    if (root == NULL) {
      return new Node(data);
    }
    else {
      Node* curr;
      if (data <= root->data) {
        curr = insert(root->left, data);
        root->left = curr;
      }
      else {
        curr = insert(root->right, data);
        root->right = curr;
      }
      return root;
    }
  }

  // BFS ==> level order transversal
  void levelOrder(Node* root) {
    queue<Node*> q;
    q.push(root);
    bool sp = false;

    while (!q.empty()) {
      if (sp) cout << " ";
      Node* curr = q.front();
      cout << curr->data;
      if (curr->left) q.push(curr->left);
      if (curr->right) q.push(curr->right);
      q.pop();
      sp = true;
    }

    cout << endl;
  }
};

int main() {
  fast;
  int t, tc = 1, nodes, data;
  BST tree;
  cin >> t;

  while (t--) {
    cin >> nodes;
    Node* root = NULL;

    while (nodes--) {
      cin >> data;
      root = tree.insert(root, data);
    }

    cout << "Case " << tc++ << ":" << endl;
    tree.levelOrder(root);
    cout << endl;
  }

  return 0;
}
