#include <bits/stdc++.h>
#define OO 100000000

using namespace std;
 
struct segment_tree {
    vector<int> tree;
   
    segment_tree(int n) {
        tree.resize((n << 2) + 4);
    }
 
    int query(int node, int start,  int end, int i, int j) {
        if( end < i || start > j || start > end)
            return OO;
 
        if( start >= i && end <= j )
            return tree[node];
 
        int l = query(node << 1, start, (start + end) >> 1, i, j);
        int r = query((node << 1) | 1, ((start +  end) >> 1) + 1, end, i, j);
       
        return min(l, r);
    }
 
    void update(int node, int start, int end, int i, int value) {
        if( end < i || start > i || start > end )
            return;
        if( start == i && end == i ) {
            tree[node] = value;
            return;
        }
 
        update(node << 1, start, (start + end) >> 1, i, value);
        update((node << 1) | 1, ((start + end) >> 1) + 1, end, i, value);
       
        tree[node] = min(tree[node << 1], tree[(node << 1) | 1]);
    }
};
 
int main() {
    int t, q, n, arr, i, j, value, nc = 0;
    scanf("%d", &t);
    while(t--) {
        nc++;
        scanf("%d %d", &n, &q);
        segment_tree tree(n);
        for(int index = 0; index < n; index++) {
            scanf("%d", &value);
            tree.update(1, 0, n - 1, index, value);
        }
 
        printf("Case %d:\n", nc);
 
        while(q--) {
            scanf("%d %d", &i, &j);
            i--;j--;
            printf("%d\n", tree.query(1, 0, n - 1, i, j));
        }
    }
    return 0;
}
