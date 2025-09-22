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

const int N = 1e4;
int dp[N];

int lucas(int i){
	if(i == 0) return 2;
	if(i == 1) return 1;
	if(dp[i] != -1) return dp[i];
	dp[i] = lucas(i - 1) + lucas(i - 2);
	return dp[i];
}

int32_t main() {
    slow;
    memset(dp, -1, sizeof dp);
    cout << lucas(7) << nl;
    
}