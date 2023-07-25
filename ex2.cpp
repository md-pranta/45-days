#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define ll long long
#define N 1000006

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        map<ll, ll>mp1,mp2,mp3;
        for(int i=0;i<n;i++){
            cin >> a[i];
            mp1[a[i]] = i+1;
        }
        for(int i=0;i<n;i++){
            mp2[i+1]=i+1;
        }
        for(int i=0;i<n;i++){
            mp3[abs(mp1[i+1]-mp2[i+1])]++;

        }
        ll k;
        for(auto it:mp3){
            k = it.first;
            break;
        }
        for(auto it:mp3)
        k= __gcd(it.first,k);
        cout << k << "\n";
    }

    return 0;
}