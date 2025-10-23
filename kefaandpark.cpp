/// IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;

#define slow ios_base::sync_with_stdio(false); cin.tie(NULL)
#define nl '\n'
#define ll long long
#define sp ' '
#define PI 3.14159265358979323846
#define __lcm(a, b) ((a / __gcd(a, b)) * b)
#define db double
#define pb push_back
#define f first
#define s second
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define cn continue
#define mod 1000000007

const int N = 1e5 + 5;
vector<int>cat(N);
vector<int>g[N];
int conse[N], vis[N];
int n, m;

void dfs(int u, int p){
	if(cat[u] == 1){
		conse[u] += conse[p] + 1;
	}
	if(conse[u] > m) return;
	vis[u] = 1;
	for(auto v: g[u]){
		if(!vis[v]) dfs(v, u);
	}
}

int32_t main() {
    slow;
    cin >> n >> m;
    for(int i =1; i<= n; i++) cin >> cat[i];
    for(int i =1; i <= n-1; i++){
    	int u, v; cin >> u >> v;
    	g[u].pb(v);
    	g[v].pb(u);
    }
    dfs(1, 0);

    int ans =0;
    for(int i =2; i <= n; i++){
    	if(g[i].size() == 1 && vis[i])ans++;
    }
    cout << ans << nl;

}
//g[i].size(): degree of a node. leaf node has the restaurent
// and we can count for leaf node that is why this codition
// leaf node deg -> 1
// https://codeforces.com/problemset/problem/580/C