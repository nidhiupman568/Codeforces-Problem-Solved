#include <bits/stdc++.h>
using namespace std;

# define ll long long
# define FOR(i, a, b) for (int i = a; i < b; i++)
# define RFOR(i, a, b) for (int i = a; i >= b; i--)
# define all(x) (x).begin(), (x).end()
# define vi vector <int>
# define vll vector <long long>
# define vpi vector<pair<int,int>>
# define vpll vector <pair<long long, long long>>
# define mapi map<int,int>
# define mapll map<ll,ll>
# define endl "\n"
# define yes cout<<"YES\n"
# define no cout<<"NO\n"
# define sajji ios_base::sync_with_stdio(false); cin.tie(nullptr);
# define input(a, n) FOR(i, 0, n) cin >> a[i];

class DisjointSet {
public:
    vector <int> rank, parent, size;
    DisjointSet (int n) {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        size.resize(n + 1);
        for (int i = 0; i <= n; i++) {
            parent[i] = i;
            size[i] = 1;
        }
    }

    int findUParent (int node) {
        if (node == parent[node]) // If No Parent is There, return the Node itself
            return node;
        // Storing Ultimate Parents along the way, this is Path Compression
        return parent[node] = findUParent(parent[node]); // If Parent is There, call recursively to find the topmost guy
    }   

    void unionByRank (int u, int v) {
        int ulp_u = findUParent(u);
        int ulp_v = findUParent(v);
        if (ulp_u == ulp_v) return; // Already in the same component
        if (rank[ulp_u] < rank[ulp_v]) {
            parent[ulp_u] = ulp_v;
        }
        else if (rank[ulp_u] > rank[ulp_v]) {
            parent[ulp_v] = ulp_u;
        }
        else {
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }

    // Check if Size of ulp_u > ulp_v or vice versa and compute accordingly
    void unionBySize (int u, int v) {
        int ulp_u = findUParent(u);
        int ulp_v = findUParent(v);
        if (ulp_u == ulp_v) return; // Already in the same component
        if (size[ulp_u] < size[ulp_v]) {
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }
        else {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }
};

ll M = 1e9 + 7;
ll n, m, k, x, y, z, p, q;

void solve() {
    cin >> n;
    vector <int> a(n + 1);
    int node, res = INT_MAX;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (res > a[i]) {
            res = a[i];
            node = i;
        }
    }
    vector <int> adj[n + 1];
    for (int i = 1; i <= n - 1; i++) {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector <ll> vis(n + 1, 0);
    ll score = 0;
    vll ans;
    auto dfs = [&](auto self, vector <int> adj[], int node, vector <ll> &vis, vector <ll> &ans) -> void {
        vis[node] = 1;
        for (auto it : adj[node]) {
            if (!vis[it]) {
                self(self, adj, it, vis, ans);
            }
        }
        ans.push_back(node);
        score += a[node];
    };
    dfs(dfs, adj, node, vis, ans);
    ans.pop_back();
    // cout << score << endl;
    cout << n - 1 << endl;
    for (auto it : ans) cout << it << " ";
    cout << endl;
}

signed main() {
    sajji;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}
