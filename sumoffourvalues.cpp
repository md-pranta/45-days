
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define N 1000006


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n, sum;
    cin >> n >> sum;

    int x[n];
    for(int i = 0; i < n; i++){
        cin >> x[i];
    }

    map<ll, pair<int, int>> mp;

    for(int b = n-1; b > 0; b--){
        for(int a = 0; a < b; a++){
            ll rem = sum-(x[a]+x[b]);
            if(mp.count(rem)){
                cout << a+1 << " " << b+1 << " " << mp[rem].first+1 << " " << mp[rem].second+1 << '\n';
                return 0;
            }
        }
        for(int i = b+1; i < n; i++){
            mp[x[i]+x[b]] = {b, i};
        }
    }

    cout << "IMPOSSIBLE\n";

    return 0;
}