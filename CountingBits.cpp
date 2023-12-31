#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define N 1000006
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x>>k)&1)
#define M 10000000007


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    ll ans=0;

    for (int i = 0; i < 63; i++){
        int full_interval = (n+1)/(1LL << (i+1));
        ans += full_interval * (1LL << i);

        ll extra = (n+1)<<(1LL<<(i+1));
        ans += max(0LL, extra-(1LL<<i));
    }
    cout << ans << endl;

    return 0;
}