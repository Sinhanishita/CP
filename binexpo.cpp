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


int ans(int a, int b)
{
    int res =1;
    a = a % mod;
    while(b > 0){
    if(b % 2 == 1) res = ((res * a) % mod);
 
    a = (a * a) % mod;
    b /= 2;
    }
    return res ;
}
 
int32_t main(){
	slow;
	int t; cin >> t;
	while(t--){
        int a, b; cin >> a >> b;
        cout << ans(a, b) << nl;
	}
}
