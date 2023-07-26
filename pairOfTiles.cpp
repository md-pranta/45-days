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
    int a[n], b[n];
    vector<int> v;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
        v.push_back(a[i]-b[i]);
    }
    sort(v.begin(), v.end());
    int ans = 0;
    for(int j = 0; j < n; j++){
        int x = b[j]-a[j];
        int cnt = upper_bound(v.begin(), v.end(),x)-v.begin();
        if(a[j]-b[j] < b[j]-a[j]) cnt --;
        ans += cnt;
    }
    cout << ans/2 << endl;
    return 0;
}