#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define N 1000006
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x>>k)&1)


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    cin>>n>>k;

    ll ans = 0;
    for(int i=k+1; i<=n; i++){
        ll part = (n+1)/i;
        ans += (i-k)*part;

        ll temp = (n+1)%i;
        ans += max(0LL,temp-k);
    }
    if(!k)ans -= n;
    cout<<ans<<endl;

    return 0;
}