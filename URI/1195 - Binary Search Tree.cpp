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

  int getHeight(Node* root) {
    if (root == NULL) return -1;
    return max(getHeight(root->left), getHeight(root->right)) + 1;
  }

  // BFS ==> level order transversal
  void levelOrder(Node* root) {
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
      Node* curr = q.front();
      cout << curr->data << " ";
      if (curr->left) q.push(curr->left);
      if (curr->right) q.push(curr->right);
      q.pop();
    }

    cout << endl;
  }

  // DFS ==> pre order
  void preOrder(Node* root) {
    stack<Node*> st;
    st.push(root);
    Node* curr = st.top();

    while (!st.empty()) {
      Node* curr = st.top(); st.pop();
      cout << curr->data << " ";
      if (curr->right) st.push(curr->right);
      if (curr->left) st.push(curr->left);
    }

    cout << endl;
  }

  void preOrderRecursive(Node* root, string &path) {
    if (root == NULL) return;
    // cout << root->data << " ";
    path += to_string(root->data) + " ";
    preOrderRecursive(root->left, path);
    preOrderRecursive(root->right, path);
  }

  void postOrder(Node* root, string &path) {
    if (root == NULL) return;
    postOrder(root->left, path);
    postOrder(root->right, path);
    // cout << root->data << " ";
    path += to_string(root->data) + " ";
  }

  void inOrder(Node* root, string &path) {
    if (root == NULL) return;
    inOrder(root->left, path);
    // cout << root->data << " ";
    path += to_string(root->data) + " ";
    inOrder(root->right, path);
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
    string pre, in, post;

    while (nodes--) {
      cin >> data;
      root = tree.insert(root, data);
    }

    tree.preOrderRecursive(root, pre);
    tree.inOrder(root, in);
    tree.postOrder(root, post);

    pre = pre.substr(0, pre.size() - 1);
    in = in.substr(0, in.size() - 1);
    post = post.substr(0, post.size() - 1);

    cout << "Case " << tc++ << ":" << endl;
    cout << "Pre.: " << pre << endl;
    cout << "In..: " << in << endl;
    cout << "Post: " << post << endl << endl;
  }

  return 0;
}
