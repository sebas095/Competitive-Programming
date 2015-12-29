#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

void max_heapify(int A[], int node, int N) {
  int left = node << 1;
  int right = node << 1 | 1;
  int largest;

  if (left <= N and A[left] > A[node]) largest = left;
  else largest = node;

  if (right <= N and A[right] > A[largest]) largest = right;
  if (largest != node) {
    swap(A[node], A[largest]);
    max_heapify(A, largest, N);
  }
}

void min_heapify(int A[], int node, int N) {
  int left = node << 1;
  int right = node << 1 | 1;
  int smallest;

  if (left <= N and A[left] < A[node]) smallest = left;
  else smallest = node;

  if (right <= N and A[right] < A[smallest]) smallest = right;
  if (smallest != node) {
    swap(A[node], A[smallest]);
    min_heapify(A, smallest, N);
  }
}

void buil_maxheap(int A[], int N) {
  for (int i = N/2; i >= 1; i--)
    max_heapify(A, i, N);
}

void buil_minheap(int A[], int N) {
  for (int i = N/2; i >= 1; i--)
    min_heapify(A, i, N);
}

ostream& operator << (ostream& out, pair< int*, int> p) {
  for (int i = 1; i <= p.second; i++)
    out << p.first[i] << " ";
  out << endl;
  return out;
}

void heap_sort(int A[], int N) {
  int heap_size = N;
  buil_maxheap(A, N);
  for (int i = N; i >= 2; i--) {
    swap(A[1], A[i]);
    heap_size--;
    max_heapify(A, 1, heap_size);
  }
}

int main() {
  fast;
  int A[] = {0, 1, 4, 3, 7, 8, 9, 10};
  int B[] = {0, 10, 8, 9, 7, 6, 5, 4};
  heap_sort(B, 7);
  cout << make_pair(B, 7);
  return 0;
}
