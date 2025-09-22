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

const int N = 1e3;
int cnt[N];

int ways(int i){
	if(i == 0) return 1;
	if(i == 1) return 1;
	if(i == 2) return 2;
	if(i == 3) return 4;
	if(cnt[i] != -1) return cnt[i];
	cnt[i] = ways(i-1) + ways(i - 2) + ways(i-3);
	return cnt[i];             
}

int32_t main() {
    slow;
    memset(cnt, -1, sizeof cnt);
    cout << ways(5) << nl;
    
}